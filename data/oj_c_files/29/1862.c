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


double F(int n)
{
	int i,a[100];
	a[0] = 1;
	a[1] = 2;
	for (i=2;i<=n-1;i++)
		a[i] = a[i-1] + a[i-2];
	return a[n-1];
}


int main()
{
	int m,n;
	scanf("%d", &m);
	int i,j;
	double s,t;
	for (i=1;i<=m;i++)
	{
		s = 0;
		scanf("%d", &n);
		for (j=1;j<=n;j++)
		{
			t = F(j+1)/F(j);
			s = s + t;
		}
		printf("%.3lf\n", s);
	}
	return 0;
}
