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
	int k,rd,n,i;
	double *x,plus,avex,output;
	scanf("%d",&k);
	for(rd=0;rd<k;rd++)
	{
		scanf("%d",&n);
		plus=0;
		output=0;
		x=(double *)malloc(n*sizeof(double));
		for(i=0;i<n;i++)
		{
			scanf("%lf",x+i);
			plus+=*(x+i);
		}
		avex=plus/n;
		for(i=0;i<n;i++)
		{
			output+=pow(*(x+i)-avex,2);
		}
		printf("%.5f\n",sqrt((output/n)));
		free(x);
	}
	return 0;
}