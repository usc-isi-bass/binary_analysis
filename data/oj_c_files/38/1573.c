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
    double a[102],h,pfh,*p;
    int k,n,i;
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d",&n);
        p=a;
        for(i=0;i<n;i++)
            scanf("%lf",p++);
        p=a;
        h=0;pfh=0;
        for(i=0;i<n;i++)
        {
            pfh=pfh+pow(*p,2);
            h=h+*p;
            p++;
        }
        printf("%.5lf\n",sqrt(pfh/n-pow(h/n,2)));
    }
}
