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

int reverse(int num)
{
    int k;
    k=0;
    while (num!=0)
    {
          k=k*10+num%10;
          num=num/10;
    }
    return k;
}

int main()
{
    int n,b,i;
    for (i=1;i<=6;i++)
    {
    scanf("%d",&n);
    if (n<0)
    {
          b=0-reverse(0-n);
          printf("%d\n",b);
    }
    else if (n==0)
    printf("0\n");
    else printf("%d\n",reverse(n));
    }
    getchar();
    getchar();
}  
