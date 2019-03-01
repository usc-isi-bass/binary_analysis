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
int a,b,c,d,e;
scanf("%d",&a);
if(a<10)printf("%d",a);
else if (a<100)
{b=(int)a/10;
c=a-b*10;
printf("%d%d",c,b);}
else if(a<1000)
{b=(int)a/100;c=(int)(a-100*b)/10;d=a-100*b-10*c;printf("%d%d%d",d,c,b);}
else if(a<10000)
{b=(int)a/1000;c=(int)(a-1000*b)/100;d=(int)(a-1000*b-100*c)/10;
e=a-1000*b-100*c-10*d;printf("%d%d%d%d",e,d,c,b);}
else if(a==10000)printf("00001");
}