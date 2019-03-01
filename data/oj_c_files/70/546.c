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
	double a,b,c,d=0,e,f;
	struct dis{
		double x,y;}*number;
	int n,i,j;

	scanf("%d",&n);
    number=(struct dis*)malloc(sizeof(int)*n);

	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&a,&b);
		(number+i)->x=a;
		(number+i)->y=b;

	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++){
		e=(number+i)->x-(number+j)->x;
		f=(number+i)->y-(number+j)->y;
		c=e*e+f*f;
		
		if(c>d)
		{
			d=c;
		}
		}
	}

	printf("%.4lf",sqrt(d));

	return 0;
}