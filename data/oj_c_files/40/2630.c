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

// ????????????.cpp : ??????????????
//


int main()
{//declaration
	double a,b,c,d,s,S,angle2,angle,S2;
	const double Pi=3.1415926;
//input
	scanf("%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d);
	scanf("%lf",&angle2);
//process
	angle=angle2/2*2*Pi/360;
	s=(a+b+c+d)/2;
	S2=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(angle)*cos(angle);
	if(S2>0)printf("%.4f",sqrt(S2));
	else printf("Invalid input");
	return 0;
}

