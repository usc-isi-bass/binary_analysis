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

int main ()
{
	
	
	double a,b,c,d,m,S;
	double s,n;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&m);

    s = (a+b+c+d)/2;
	n=m*PI/360;
    S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*(cos(n))*(cos(n)));
	if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*(cos(n))*(cos(n))>=0){
	
		printf("%.4f",S);
	}

		if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*(cos(n))*(cos(n))<0){
			printf("Invalid input");
		}
		return 0;
}