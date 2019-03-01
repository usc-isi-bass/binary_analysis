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
	int n,i;
	float a,b,c,delta;
	double x1,x2,p,q;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
    scanf("%f%f%f\n",&a,&b,&c);
	delta=b*b-4*a*c;
	if(delta>0)
	{
		x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
		x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
		printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
	}
	else if(delta==0)
	{
		x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
		x2=x1;
		printf("x1=x2=%.5lf\n",x1);
	}
	else
	{
		p=-b/(2*a);
        q=sqrt(-delta)/(2*a);
		if(p==-0)
			p=0;
		printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",p,q,p,q);
	}
	}
		return 0;
}

