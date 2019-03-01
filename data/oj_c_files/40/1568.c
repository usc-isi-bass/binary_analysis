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

int main ()
{
	double pi=3.1415926,f,s=0,a[4],sum;
	int i;
	for(i=0;i<4;i++)
		scanf("%lf",&a[i]);
	scanf("%lf",&f);
	f=pi/360*f;
	for(i=0;i<4;i++)
		s=s+(a[i])/2;
    sum=(s-a[0])*(s-a[1])*(s-a[2])*(s-a[3])-a[0]*a[1]*a[2]*a[3]*cos(f)*cos(f);
	if(sum<0) printf("Invalid input");
	else
	{
		sum=sqrt(sum);
		printf("%.4f",sum);
	}
}