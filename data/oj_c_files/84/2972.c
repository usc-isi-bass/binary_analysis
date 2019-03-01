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

void main()
{
int a,b,c,n;
scanf("%d\n",&n);
scanf("%d\n",&a);
scanf("%d\n",&b);

while(n!=2)
{
scanf("%d\n",&c);
if (a>=b)
if (a>=c)
if (b>=c)
a=a; 
else b=c;
else
{b=a;
a=c;}
else 
if (a>=c)
{c=b;b=a;a=c;}
else
if(b>=c)
{a=b;b=c;}
else
a=c;

n=n-1;
}
printf("%d\n",a);
printf("%d\n",b);
}