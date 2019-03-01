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


int main()
{
	float a,b,c,d,e,f,s,k,h;
	scanf ("%f%f%f%f%f",&a,&b,&c,&d,&e);
	f=(3.1415926*e)/360;
	s=(a+b+c+d)/2;
	k=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(f)*cos(f));
	if (((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(f)*cos(f))<0)
		printf ("Invalid input");
	else
		printf("%.4f",k);
}
