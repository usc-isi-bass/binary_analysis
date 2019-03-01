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
    int N;
    cin>>N;
    int a[40],b[40];
    a[0]=1,b[0]=1;
    for (int i=1;i<40;i++)
    a[i]=0,b[i]=0;
    for (int i=0;i<N;i++)
    {
       for (int k=0;k<39;k++)
       {
           a[k]=a[k]*2;
        }
        for (int k=0;k<39;k++)
        b[k]=a[k];
        for (int k=0;k<39;k++)
        
           if (b[k]>=10)
            {
            b[k+1]++;
            b[k]=b[k]-10;
            }
             for (int k=0;k<39;k++)
             a[k]=b[k]; 
    }
    int m;
    for (int i=39;i>=0;i--)
      if (b[i]!=0)
      {
          m=i;
          break;
      }
    for (int i=m;i>=0;i--)
    cout<<b[i];
    return 0;
}   
