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
	double a[5],o,s,S;
	int i;
	for (i=1;i<=4;i++) scanf("%lf",&a[i]);
	scanf("%lf",&o);
	o=o/2;
	o=o/360*2*3.1415926;
	s=(a[1]+a[2]+a[3]+a[4])/2;
	S=(s-a[1])*(s-a[2])*(s-a[3])*(s-a[4])-a[1]*a[2]*a[3]*a[4]*cos(o)*cos(o);
	if (S<0) printf("%s","Invalid input");
	  else 
	  {
			S=sqrt(S);
			printf("%.4lf",S);
	  }
	
}
