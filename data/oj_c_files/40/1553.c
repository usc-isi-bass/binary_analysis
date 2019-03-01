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

int main(){
	float a,b,c,d,m,jd;
	float s,S;
	scanf("%f %f %f %f",&a,&b,&c,&d);
	scanf("%f",&m);
	jd=m*PI/360;
	s=(a+b+c+d)/2;
	S=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(jd)*cos(jd);
	if (S<0)
		printf("Invalid input");
	else
		printf("%.4f\n",sqrt(S));
	return 0;
}