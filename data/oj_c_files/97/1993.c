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
int x,a,b,c,d,e,f;
scanf("%d",&x);
a=(x-x%100)/100;
x=x-100*a;
b=(x-x%50)/50;
x=x-50*b;
c=(x-x%20)/20;
x=x-20*c;
d=(x-x%10)/10;
x=x-10*d;
e=(x-x%5)/5;
f=x-5*e;
printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
return 0;
}
