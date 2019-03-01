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
	struct shu{
		int n;
		double x[101];
	}pp[100];
		int k,i,j;
	double a1=0,a2=0;
		double s=0,S;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		s=0;
		S=0;
		a1=0;
		a2=0;
		scanf("%d",&pp[i].n);
		for(j=0;j<pp[i].n;j++)
		{
			scanf("%lf",&pp[i].x[j]);
			a1+=pp[i].x[j];
		}
		a2=a1/pp[i].n;
		for(j=0;j<pp[i].n;j++)
		{
			s+=(pp[i].x[j]-a2)*(pp[i].x[j]-a2);
		}
		S=sqrt(s/pp[i].n);
		printf("%.5f\n",S);
	}
	return 0;
}

		


	    