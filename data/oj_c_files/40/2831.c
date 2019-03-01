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



double mianji(double a,double b,double c,double d,double O)
{
	double S,s;
	s=(a+b+c+d)/2;
	if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(O)*cos(O)>=0)
		S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(O)*cos(O));
	else
		S=-1;
	return S;
}

main()
{
	double a,b,c,d,o,O;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&o);
	O=2*PI*(o/2)/360;
	if(mianji(a,b,c,d,O)==-1)
		printf("Invalid input\n");
	else
		printf("%.4lf\n",mianji(a,b,c,d,O));
}