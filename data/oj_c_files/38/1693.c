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
	int k,n,i,*p,j;
	double x[100],a,b,c,s;
	scanf("%d",&k);
	p=(int*)malloc(sizeof(n+x[100])*k);
	for(i=0;i<k;i++)
	{
		b=0;
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lf",&x[j]);
			b=b+x[j];
		}
		a=b/n;
		c=0;
		for(j=0;j<n;j++)
		{
			c=c+(x[j]-a)*(x[j]-a);
		}
		s=sqrt(c/n);
		printf("%.5lf\n",s);
	}
	free(p);

	return 0;
}