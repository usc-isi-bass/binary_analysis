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
double a,b,c,d,e,s,S;

scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&e);
s=(a+b+c+d)/2.0;
if (((s-a)*(s-b)*(s-c)*(s-d))<=0) {
	printf("Invalid input\n");
}
else{
S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(PI*e/360.0)*cos(PI*e/360.0)); 
printf("%.4lf\n",S);
}
return 0;
}
