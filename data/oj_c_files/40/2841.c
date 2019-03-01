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


float s2(float a,float b,float c,float d,float anglesum);

int main(int argc, char* argv[])
{
	float a,b,c,d,anglesum,s,S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&anglesum);
	s=s2(a,b,c,d,anglesum);
	if(s<0){
		printf("Invalid input\n");
	}else{
		S=sqrt(s);
		printf("%.4lf",S);
	}
	return 0;
}

float s2(float a,float b,float c,float d,float anglesum)
{
	float s2,s;
	s=(a+b+c+d)/2;
	s2=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(anglesum*PI/360)*cos(anglesum*PI/360); 
	return s2;
}