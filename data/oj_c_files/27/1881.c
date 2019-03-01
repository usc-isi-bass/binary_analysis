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
	double a,b,c,delta,m,n;
	int i = 0;
	scanf("%d",&i);
	while(i--)
	{
		scanf("%lf%lf%lf",&a,&b,&c);
		delta=b*b-4*a*c;
		
		if(delta<0)
		{
			m=-b/2/a;
			n=sqrt(-delta)/2/a;
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",m,n,m,n);
		}
		else 
			if(delta==0)
			{
				m=-b/2/a;
				printf("x1=x2=%.5lf\n",m);
			}
			else 
			{
				m=-b/2/a;
				n=sqrt(delta)/2/a;
				printf("x1=%.5lf;x2=%.5lf\n",m+n,m-n);
			}
	}
	return 0;
}


