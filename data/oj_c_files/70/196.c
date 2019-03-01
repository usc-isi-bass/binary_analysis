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

int main(int argc, char*argv[])
{
	int n,i;
	double dis,maxdis=0;
	scanf("%d",&n);
	double *px,*py;
	px=(double *)malloc(sizeof(double) * n);
	py=(double *)malloc(sizeof(double) * n);
	if(n>=2)
	{
		for(i=n-1;i>=0;i--)
		{
			scanf("%lf%lf",&px[i],&py[i]);
		}
	}
	int j;
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			dis=(px[j]-px[i])*(px[j]-px[i])+(py[j]-py[i])*(py[j]-py[i]);
			if(maxdis<dis)
			{
				maxdis=dis;
			}
		}
	}
	maxdis=sqrt(maxdis);
	free(px);
	free(py);
	printf("%.4f\n",maxdis);
	return 1;
}