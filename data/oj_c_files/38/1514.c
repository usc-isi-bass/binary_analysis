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
    int k,i;
    scanf("%d",&k);
     
     for(i=0;i<k;i++){
      int n,j;
      scanf("%d\n",&n);
      double sz[100],s[100];
      double a=0,sum1=0,sum2=0;

      for(j=0;j<n;j++){
        scanf("%lf\n",&sz[j]);
        sum1+=sz[j];
       }
         a=sum1/n;
         for(j=0;j<n;j++){
           sum2+=(sz[j]-a)*(sz[j]-a);
        }  
         s[i]=sqrt(sum2/n);
         printf("%.5f\n",s[i]);
     }
    
     return 0;
}      