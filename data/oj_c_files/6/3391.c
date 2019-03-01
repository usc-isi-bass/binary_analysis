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
    int n;
    scanf("%d", &n);
    int i;
    for(i=0;i<n;i++){
         int a,b;
         scanf("%d %d",&a,&b);
         int c[a][b];
         int j,k;
         for(j=0;j<a;j++){
               for(k=0;k<b;k++){
                      scanf("%d",&c[j][k]);
               }  
         }
         int s=0;
         for(k=0;k<b;k++){
               s+=c[0][k];
         }
         for(j=1;j<a;j++){
               s+=c[j][b-1];
         }
         for(k=0;k<b-1;k++){
               s+=c[a-1][k];
         }
         for(j=1;j<a-1;j++){
               s+=c[j][0];
         }
         printf("%d\n",s);
    }
    return 0;
}
