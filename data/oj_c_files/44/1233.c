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
    int a=0,b=0,c=0;
    if (num==0) {c=num;}
    else if (num<0)
    {
         a=-num;
         do
         {b=a%10;
         c=(c+b)*10;
         a=a/10;}
         while (a>9);
         c=-c-a;
    }
    else
    {
         a=num;
         do
         {b=a%10;
         c=(c+b)*10;
         a=a/10;}
         while (a>9);
         c=c+a;
    }
    return c;
}
int main()
{
    int m,i;
    for (i=1;i<=6;i++)
    {scanf ("%d",&m);
    printf ("%d\n",reverse(m));}
    return 0;
}