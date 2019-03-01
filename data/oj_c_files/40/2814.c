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


double area(double a,double b,double c,double d,double e);
int main()
{
	double a,b,c,d,e;
	scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&e);
	area(a,b,c,d,e);
	return 0;
}

double area(double a,double b,double c,double d,double e){
	double y,s;
	s=(a+b+c+d)/2;
	if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e*90/PI))<0){
		printf("Invalid input");
	}
	else{
		y=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e*PI/360)*cos(e*PI/360)); 
		printf("%.4lf\n",y);;
	}
	return 0;
}
	
