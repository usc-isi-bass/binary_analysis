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

main()
{
    int n,i,j;
    double d,maxd=0;
    struct
    {
        double x,y;
    }pts[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf %lf",&pts[i].x,&pts[i].y);
        for(j=0;j<i;j++)
        {
            d=sqrt((pts[i].x-pts[j].x)*(pts[i].x-pts[j].x)+(pts[i].y-pts[j].y)*(pts[i].y-pts[j].y));
            if(d>maxd)maxd=d;
        }
    }
    printf("%.4lf",maxd);
    return 0;
}

