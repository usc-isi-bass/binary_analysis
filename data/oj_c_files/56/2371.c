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
int a,b,c,d,e,x;
scanf("%d",&x);
a=x%10;
e=x/10000;
d=(x-10000*e)/1000;
c=(x-10000*e-1000*d)/100;
b=(x-10000*e-1000*d-100*c)/10;
if(a!=0)printf("%d",a);
if(b!=0)printf("%d",b);
if(c!=0)printf("%d",c);
if(d!=0)printf("%d",d);
if(e!=0)printf("%d",e);
}