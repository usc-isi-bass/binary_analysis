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
	int n,a;
	float x[1000],c,d=0;
	double f,e=0,q;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		for(int k=0;k<a;k++)
		{
			scanf("%f",&x[k]);
			d=d+x[k];
		}
		c=d/a;
		for(int p=0;p<a;p++)
		{
			q=(x[p]-c)*(x[p]-c)/a;
			e=e+q;
			f=sqrt(e);
		}
		printf("%.5lf\n",f);
		d=0;
		e=0;
	}
	return 0;
}