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
    int m,n;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&n);
        float sum=0;
        float x,y,t;
        x=2;
        y=1;
        for(int j=1;j<=n;j++)
        {
            if(j==1)
            sum=2;
            else
            {
                sum=(x+y)/x+sum;
                t=x;
                x=x+y;
                y=t;
            }
        }
        printf("%.3f\n",sum);
        sum=0;
    }
}
