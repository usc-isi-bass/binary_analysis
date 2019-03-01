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
	double a[4];
	double angle;
	double s=0.0;
	double S=0;
	int i;
	for(i=0;i<4;i++)
	{
		scanf("%lf",&a[i]);
		s+=a[i];
	}
	s/=2;
	scanf("%lf",&angle);
	angle=angle/360*PI;
	S=(s-a[0])*(s-a[1])*(s-a[2])*(s-a[3])-a[0]*a[1]*a[2]*a[3]*cos(angle)*cos(angle);
	if(S<0)
	{
		printf("Invalid input");
		return 0;
	}
	S=sqrt(S);
	printf("%.4lf",S);
	return 0;
}

