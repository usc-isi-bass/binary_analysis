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

int main ()
{
    int m,n;
    int i,j,k;
    scanf("%d",&m);
    for (k=0;k<m;k++) {
        scanf("%d",&n);
        float s=0;
        float*num=(float*) malloc(sizeof(float)*(2*n+2));
        float*nm=(float*) malloc(sizeof(float)*(n+1));
        num[1]=1;
        num[2]=1;
        for (i=3;i<=2*n+1;i++) {
            num[i]=num[i-2]+num[i-1];
            }
        for (i=1;i<=n;i++) {
            nm[i]=num[i+2]/num[i+1];
            }
        for (i=1;i<=n;i++) {
                s+=nm[i];
                }
        printf("%.3f\n",s);
        free(num);
        free(nm);
        }
    return 0;
}