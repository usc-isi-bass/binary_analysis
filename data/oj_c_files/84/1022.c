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
    int n,i,a,max,imax;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        switch(i)
        {
            case 1: scanf("%d",&imax); break;
            case 2: scanf("%d",&a);
                    if(a>imax)
                    {
                        max=imax;
                        a=imax;
                    }
                    else max=a;
                    break;
            default:scanf("%d",&a);
                    if(a>=imax)
                    {
                        max=imax;
                        imax=a;
                    }
                    else if(a<imax&&a>=max)
                    {
                        max=a;
                    }
        }
    }
    printf("%d\n%d\n",imax,max);
    return 0;
}
