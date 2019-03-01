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
	double a[4],p,s=0,q,m;
	int i;
	for(i=0;i<4;i++)
	{
		scanf("%lf",&a[i]);
		s+=a[i];
	}
	s=s/2;
	scanf("%lf",&p);
	p=p*Pi/360;
	q=((s-a[0])*(s-a[2])*(s-a[3])*(s-a[1])-a[0]*a[1]*a[3]*a[2]*cos(p)*cos(p));
	if(q<0) 
	{
		printf("Invalid input");
		return;
	}
	else m=sqrt(q);
	printf("%.4lf",m);
}