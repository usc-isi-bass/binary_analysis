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

float surface(float a,float b,float c,float d,float o);
void main()
{
	float a,b,c,d;
	float o;
	scanf("%f%f%f%f",&a,&b,&c,&d);
	scanf("%f",&o);
	if(surface(a,b,c,d,o)==-1)
		printf("Invalid input");
	else
	printf("%.4f",surface(a,b,c,d,o));
}
float surface(float a,float b,float c,float d,float o){
    float face,s;
	s=(a+b+c+d)/2;
	if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*(cos(PI*o/360))*(cos(PI*o/360))<0)
	{
		return (-1);
	}
    else
	face=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*(cos(PI*o/360))*(cos(PI*o/360))) ;
	return face;
}