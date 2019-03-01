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
	double a,b,c,d,e,f,t,h,s,m,z;
	scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&m);
	f=3.1415926;
	e=(a+b+c+d)*1.0/2;
	
	h=m*f/360;
	
	t=a*b*c*d*cos(h)*cos(h);
	z=(e-a)*(e-b)*(e-c)*(e-d)-t;
	if(z>0){
	s=sqrt((e-a)*(e-b)*(e-c)*(e-d)-t);
	printf("%.4lf\n",s);}
	else
		printf("Invalid input");
	return 0;}




