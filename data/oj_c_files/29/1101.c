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
	int i,j,m,n;
	double a=2,b=1,x,fenshu=0;

	scanf("%d ",&m);
	double *p=(double *)malloc(sizeof(double)*m);


	for(j=0;;j++)
	{
		scanf(" %d",&n);
		for(i=1;;i++)
		{
			fenshu+=a/b;
			x=a+b;
			b=a;
			a=x;

			if(i==n) break;
		}
		p[j]=fenshu;
		fenshu=0;
		a=2;
		b=1;
		if(j==(m-1)) break;
	}
	

	for(j=0;j<m;j++)
	{
		printf("%.3lf\n",p[j]);
	}

	free(p);
	return 0;
	
}