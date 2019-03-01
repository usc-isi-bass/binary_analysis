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
	double a,b,c,d,tah,s,tot,tahc;
	int ta;
	scanf("%lf%lf%lf%lf%d",&a,&b,&c,&d,&ta);
	tah=((double)ta)/360*PI;
	s = 0.5*(a+b+c+d); 
	tahc=cos(tah);
	tot = (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*tahc*tahc; 
	if (tot>=0)
		printf("%.4lf",sqrt(tot));
	else printf("Invalid input");
	return 0;
}
