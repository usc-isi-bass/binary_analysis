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

void main()
{
	float a,b,c,d,s,angle2;
	double S,sum,PI=3.1415926,angle;
	scanf("%f%f%f%f",&a,&b,&c,&d);
	s=(a+b+c+d)/2;
	scanf("%f",&angle2);
	angle=angle2/2/180*PI;
	sum=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(angle)*cos(angle);
	if(sum>=0)
	{
    	S = sqrt(sum);
		printf("%.4f",S);
	}
	else printf("Invalid input");

}

