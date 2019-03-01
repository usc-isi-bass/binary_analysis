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

double area(double a,double b,double c,double d,double e)
{
	double s,q,S;
	s=(a+b+c+d)/(2.0);
	q=cos(e*(3.1415926)/(180.0)/(2.0));
        return sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*q*q);
}
int main()
{
	double n1,n2,n3,n4,m;
	scanf("%lf%lf%lf%lf%lf",&n1,&n2,&n3,&n4,&m);
    if(area(n1,n2,n3,n4,m)>=0) 
	{
		printf("%.4lf",area(n1,n2,n3,n4,m));
	}
	else printf("Invalid input");
	return 0;
}


