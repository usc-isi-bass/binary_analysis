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
	int k,n,i,j;
	double a[100],b,s;
	scanf("%d",&k);
	s=0;
	b=0;
	for(i=0;i<k;i++)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lf",&a[j]);
		}
		for(j=0;j<n;j++)
		{
			b+=a[j];
		}
		b=b/n;
		for(j=0;j<n;j++)
		{
			s+=pow(a[j]-b,2);
		}
		s=sqrt(s/n);
		printf("%.5f\n",s);
		s=0;
		b=0;
	}
	return 0;
}
