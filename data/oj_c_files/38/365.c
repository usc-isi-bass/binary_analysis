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
     int k,i,n,j,p;
     double  x[1000],a,b,s,S;
     scanf("%d",&k);  
     for(i=0;i<k;i++)
     {       a=0;
             s=0;
             S=0;
            scanf("%d",&n);
            for(j=0;j<n;j++)
                {
                    scanf("%lf",&x[j]); 
                    a=a+x[j];
                }   
            b=a/n;
          
            j=0;
            for(j=0;j<n;j++)
                {
                    s=s+(x[j]-b)*(x[j]-b);  
                }   
                
            S=sqrt(s/n);  
            printf("%.5lf\n",S); 
     }
     //scanf("%d",&p);
     return 0;
}
