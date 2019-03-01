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
	double a,b,c,x1,x2,disc,p,q;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf %lf", &a, &b, &c);
		disc=b*b-4*a*c;
		if(disc>0)
		{
			q=sqrt(disc);
			x1=((-1)*b+q)/(2*a);
			x2=((-1)*b-q)/(2*a);
			printf("x1=%.5lf;x2=%.5lf\n", x1, x2);
		}
		else if(disc==0)
		{
			p=(-1)*b/(2*a);
			printf("x1=x2=%.5lf\n",p);
		}
		else if(disc<0)
		{
            q=sqrt((-1)*disc)/(2*a);
            p=(-1)*b/(2*a);
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", p, q, p, q);
		}
	}
	return 0;
}