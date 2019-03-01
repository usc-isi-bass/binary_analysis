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
    int a,b,c,a1,b1,c1;
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            for(c=0;c<3;c++)
            {
                a1=0;
                b1=0;
                c1=0;
                if(b>a)
                a1++;
                if(c==a)
                a1++;
                if(a>b)
                b1++;
                if(a>c)
                b1++;
                if(c>b)
                c1++;
                if(b>a)
                c1++;
                if(a1+a==b1+b&&b1+b==c1+c)
                {
                printf("BCA");
                }
            }
        }
    }
}
