#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()//?????
{
     int d[100000],n,k,i,count=0;//?????n?k?i?????count
     cin>>n;//??n
     for(int i=0;i<n;i++)//??????
        cin>>d[i];
     cin>>k;//????????k
     for(int i=n-1;i>=0;i--)//?????????????????
         if(d[i]==k)  {
			for(int j=i+1;j<n;j++)   d[j-1]=d[j];
                        count++;

                       }
    if(count==n)  cout<<" "<<endl;//???????????
    else {
		cout<<d[0];//??d[0]
                for(int i=1;i<n-count;i++)//?1?n-1??????????
                cout<<" "<<d[i];
                cout<<endl;

	}
  
     return 0;//?????

} 










