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



double ver(double a[],int n)
{
	double sum=0;
	int i;
	for(i=0;i<n;i++)
		sum+=a[i];
	return sum/n;
}
int main()
{
	int k,m,n;
	int i,j;
	double *p,x[M],a,s;
	scanf("%d",&k);
	while(k--)
	{
		scanf("%d",&n);
		for(p=x;p<n+x;p++)
			scanf("%lf",p);
		a=ver(x,n);
		p=x,s=0;
		for(i=0;i<n;i++)
			s+=(x[i]-a)*(x[i]-a);
		printf("%.5f\n",sqrt(s/n));

	}
}