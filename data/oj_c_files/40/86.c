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
	float a,b,c,d,e,f,S,s;
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	if(e>=180)
	{
		printf("Invalid input");
	}
	else{
	s=(a+b+c+d)/2;
	f=e/360*3.14159265358979f;
    S=(float)sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos(f),2)); 
	printf("%.4f",S);
	}
	return 0;
}