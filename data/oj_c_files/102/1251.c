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
    struct line
    {
         char x[10];
         double y;
    };
    int n,a,b,m;
    double c;
    scanf("%d",&n);
    struct line *p=(struct line *)malloc(n*sizeof(struct line));
    for(a=0;a<=n-1;a++)
    {
        scanf("%s",((p+a)->x));
        scanf("%lf",&((p+a)->y));
    }
    for(a=0;a<=n-2;a++)
    {
        if(*((p+a)->x)=='m')
        {
            for(b=a+1;b<=n-1;b++)
            {
                if(*((p+b)->x)=='m')
                {
                    if(((p+b)->y)<((p+a)->y))
                    {
                        c=(p+b)->y;
                        ((p+b)->y)=((p+a)->y);
                        ((p+a)->y)=c;
                    }
                    else;
                }
                else;
            }
        }
        else
        {
             for(b=a+1;b<=n-1;b++)
            {
                if(*((p+b)->x)=='f')
                {
                    if(((p+b)->y)>((p+a)->y))
                    {
                        c=(p+b)->y;
                        ((p+b)->y)=((p+a)->y);
                        ((p+a)->y)=c;
                    }
                    else;
                }
                else;
            }
        }
    }
    for(a=0;a<=n-1;a++)
    {
        if(*((p+a)->x)=='m')
        printf("%.2lf ",((p+a)->y));
        else;
    }
    for(a=0;a<=n-1;a++)
    {
        if(*((p+a)->x)=='f')
        m=a;
        else;
    }
    for(a=0;a<=n-1;a++)
    {
        if(*((p+a)->x)=='f')
        {
            if(a!=m)
            printf("%.2lf ",((p+a)->y));
            else
            printf("%.2lf",((p+a)->y));
        }
        else;
    }
}