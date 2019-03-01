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
    int m,w;
    double v[2];
    double p[2];
    double v0,p0,c;
    scanf("%d",&m);
    scanf("%lf %lf",v,v+1);
    v0=v[1]/v[0];
    m--;
    for(w=0;w<m;w++)
    {
        scanf("%lf %lf",p,p+1);
        p0=p[1]/p[0];
        c=p0-v0;
        if(c>0.05)
        printf("better\n");
        else
        {
            if(c<-0.05)
            printf("worse\n");
            else
            printf("same\n");
        }
    }
    return 0;
}
