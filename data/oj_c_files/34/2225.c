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
    int i,j,m,n,p;
    char str[10001],a,b;
    scanf("%d",&m);
    while(m!=1)
    {
        if (m%2!=0)
        {
            n=m;
            m=n*3+1;
            printf("%d*3+1=%d\n",n,m);
        }
        else
        {
            p=m;
            m=p/2;
            printf("%d/2=%d\n",p,m);
        }
    }
    printf("End");
}
