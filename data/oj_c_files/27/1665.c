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
	int n,i;
	double a,b,c,d,e;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf%lf",&a,&b,&c);
		d=b*b-4*a*c;
		if (b==0)
			e=0;
		else
			e=(-b)/(2*a);
		if(d>0)
		
			printf("x1=%.5lf;x2=%.5lf\n",e+sqrt(d)/(2*a),e-sqrt(d)/(2*a));
		
		else if (d<0)
		
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", e,sqrt(-d)/(2*a),e,sqrt(-d)/(2*a));
	
	else if(d==0)
		printf("x1=x2=%.5lf\n",e);
}
return 0;
}
