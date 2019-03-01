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
int i, j, k, l, n;
double x[100], y[100], dis, sum, xj, yj, zdj=0;
scanf("%d", &n);
for(i=0;i<n;i++)
{
	scanf("%lf%lf", &x[i], &y[i]);
	for(j=0;j<i;j++)
	{
		xj=x[i]-x[j];
	yj=y[i]-y[j];
	dis=sqrt(xj*xj+yj*yj);
	if(dis>zdj)
	{
		zdj=dis;
	}
	}
}
	printf("%.4lf", zdj);
		return 0;
}