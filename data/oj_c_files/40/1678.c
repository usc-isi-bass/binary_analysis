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


float sss(float a,float b,float c,float d,float alpha)
{
	float s=(a+b+c+d)/2;
	return (float)sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(alpha/180*3.1415926/2)*cos(alpha/180*3.1415926/2));
}

int main()
{
	float a,b,c,d,alpha;
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&alpha);
	float result;
	result=sss(a,b,c,d,alpha);
	if(result>0) printf("%.4f\n",result);
	else printf("Invalid input\n");
	return 0;
}