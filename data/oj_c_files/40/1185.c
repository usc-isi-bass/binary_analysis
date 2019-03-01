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


double getarea(double a,double B,double c,double d,double e);
int main()
{
    double a,B,c,d,e,f;
	scanf("%lf",&a);
	scanf("%lf",&B);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&e);
	f=getarea(a,B,c,d,e);
    if(f==-1)
	{
		printf("Invalid input");
	}
	else
	{
		printf("%.4f",f);
	}
	return 0;
}




double getarea(double a,double B,double c,double d,double e)
{
	double area,s;
	s=(a+B+c+d)/2; 

	if((s-a)*(s-B)*(s-c)*(s-d) - a*B*c*d*cos(e/360*3.1415926)*cos(e/360*3.1415926)>=0)
	    area= sqrt((s-a)*(s-B)*(s-c)*(s-d) -a*B*c*d*cos(e/360*3.1415926)*cos(e/360*3.1415926)); 
    else
        area=-1;
	return area;
}

