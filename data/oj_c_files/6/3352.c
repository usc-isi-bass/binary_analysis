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

int main()
{
	int k,n,m,num[100][100],sum;
	cin>>k;
	cout<<endl;
	for(int a=0;a<k;a++)
		{   cin>>m>>n;
	          sum=0;
			for(int i=0;i<m;i++)
	       {
		       for(int j=0;j<n;j++)
		          { cin>>num[i][j];
			        cout<<" ";
			   if(i==0||i==m-1||j==0||j==n-1)
			   { sum+=num[i][j];}
			   }
			   cout<<endl;
			}
			cout<<sum<<endl;
	}
			return 0;
}