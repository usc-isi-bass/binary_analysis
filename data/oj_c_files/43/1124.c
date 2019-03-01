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


int istarget(int);

int main(void)
{
    int num,i;
    scanf("%d",&num);
    for (i=2;i<=num/2;i++)
    {
        if (istarget(i)==1 && istarget(num-i)==1)
            printf("%d %d\n",i,num-i);
    }

    return 0;
}

int istarget(int num)
{
    int i;
    for (i=2;i<=num/2;i++)
    {
        if (num%i==0)
            return 0;
    }
    return 1;
}
