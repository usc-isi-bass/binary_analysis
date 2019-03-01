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
	int i,j,k,n[100];
	double x[1000],a=0,h=0,s=0;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n[i]);
		for(j=0;j<n[i];j++)
		{
			scanf("%lf",&x[j]);
			a+=x[j];
		}
		a=a/(n[i]*1.0);
		for(j=0;j<n[i];j++)
		{
			h+=(x[j]-a)*(x[j]-a);
		}
		h=h/(n[i]*1.0);
		s=sqrt(h);
		printf("%.5f\n",s);
		a=0,h=0,s=0;
	}
	return 0;
}