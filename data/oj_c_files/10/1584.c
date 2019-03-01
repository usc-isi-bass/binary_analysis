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

int N;
int tmp[27],flight[27];

int main()
{
    cin>>N;
    for(int i=0;i<N;i++)   
    	cin>>tmp[i];
    for(int i=0;i<N;i++)
      {
        flight[i]=0;
        for(int j=0;j<i;j++)
          if(tmp[j]>=tmp[i]&&flight[j]>flight[i])
            flight[i]=flight[j];
        flight[i]++;
      }
    int max=0;
    for(int i=0;i<N;i++)
      if(flight[i]>max)   
    	  max=flight[i];
    cout<<max<<endl;
    return 0;
}