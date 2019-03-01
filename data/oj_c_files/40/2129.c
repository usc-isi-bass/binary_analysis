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
double a,b,c,d,sita,s,tmp;
a=b=c=d=sita=s=tmp=0;
scanf("%lf",&a);
scanf("%lf",&b);
scanf("%lf",&c);
scanf("%lf",&d);
scanf("%lf",&sita);
s=(a+b+c+d)/2;
sita=sita*PI/360;
sita=cos(sita);
tmp=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*sita*sita;
if(tmp<0)
{
printf("Invalid input\n");
goto eof;
}
tmp=sqrt(tmp);
printf("%.4f",tmp);
eof:;
}