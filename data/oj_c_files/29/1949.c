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

double calculate(int m)
{
	double sum;
	int a,b,c,i;
	a=1;
	b=2;
	sum+=b*1.0/a;
	for(i=1;i<=m-1;i++)
	{
		c=a+b;
		a=b;
		b=c;
		sum+=b*1.0/a;
	}
	return sum;
}
void main()
{
	int n,i,m;
	double sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		sum=calculate(m);
		printf("%.3f\n",sum);
	}
}
