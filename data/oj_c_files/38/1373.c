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
	int k, i, j, n;
	double  a[1001], s, p, av, sum, t, to;
	scanf("%d", &k);
	for(j=0;j<k;j++)
	{
		sum=0;
		t=0;
		scanf("%d", &n);
		for(i=0;i<n;i++)
		{
			scanf("%lf ", &a[i]);
		}
		for(i=0;i<n;i++)
		{
			sum+=a[i];
		}
		av=sum/n;
		for(i=0;i<n;i++)
		{
			t+=(a[i]-av)*(a[i]-av);
		}
		to=t/n;
		s=sqrt(to);
		printf("%.5lf\n", s);
	}
	return 0;
}