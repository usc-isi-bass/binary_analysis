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

int shu(int a)
{
    int i,n;
    for (i=2;i<=sqrt(a);i++)
    {
        if (a%i==0) return 0;
    }
    return 1;
}
main()
{
    int m,j,sum=0;
    scanf("%d",&m);
    for (j=3;j<=m-2;j++)
    {
        if (shu(j)  &&  shu(j+2))
        {
            printf("%d %d\n",j,j+2);
            sum++;
        }
    }
    if (sum==0) printf("empty");
}
