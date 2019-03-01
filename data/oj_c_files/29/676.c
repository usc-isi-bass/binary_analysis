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

void main()
{
    int m,i,j,k;
    float sum=0.0,sum1;
    scanf("%d",&m);
    int n[1000];
    float jg[1000];
    
    for(i=0;i<m;i++)
      {
         scanf("%d",&(n[i]));
      }

     for(i=0,j=0;i<m,j<m;i++,j++)
      {
         float f[100000];
         f[0]=1;
		 f[1]=2;
         for(k=2;k<=n[i];k++)
            {
               f[k]=f[k-1]+f[k-2];
            }
         for(k=1;k<=n[i];k++)
            {
               sum1=f[k]/f[k-1];
               sum=sum+sum1;
            }
         jg[j]=sum;
         sum=0; 
      }        
    for(j=0;j<m;j++)
      {
          printf("%.3f\n",jg[j]);
      }
   
   
}   


