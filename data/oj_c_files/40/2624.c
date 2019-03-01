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

double main()
{
	double a,b,c,d,w,u,s,m,q;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
    scanf("%lf",&d);
    scanf("%lf",&w);
	s=(a+b+c+d)/2;
	q=w/2/180*pi;
     u =(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(q)*cos(q);
	 if(u>0)
	 {
	m=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(q)*cos(q));
	printf("%.4f",m);}
	 else
		 printf("Invalid input");
	return 0;
}


