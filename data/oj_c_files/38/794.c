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
    int i,j,n,m;
    double sz[1000],sum=0,av=0,S=0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
         scanf("%d", &m);
         sum=0;
         av=0;
         for(j=0;j<m;j++){
             scanf("%lf", &sz[j]);
             sum+=sz[j];
             
         }
         av=sum/m;
         sum=0;
         for(j=0;j<m;j++){
            
            sum+=(sz[j]-av )*(sz[j]-av );
         }
         S=pow(sum/m,0.5);
         printf("%.5lf\n", S);

    }
    return 0;
}