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

int main(int argc, char* argv[])
{
	float a,b,c,d;
	float alf;
	double halfa;
	float s;
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&alf);
	s=(a+b+c+d)/2;
	halfa=p*alf/360;
	double S;
	if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos(halfa),2)>=0){
		S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos(halfa),2));
	printf("%.4f",S);
	}
	else 
		printf("Invalid input");
	return 0;
}
