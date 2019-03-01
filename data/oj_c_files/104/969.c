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

void main()
{
	int f(int m,int n);
	int d,M,N;
	scanf("%d%d",&M,&N);
	printf("%d",f(M,N));
}
int f(int m,int n)
{
	int a;
	if (m<n)
	{
		a=m;
		m=n;
		n=a;
	}
	if (m==n)
		return m;
	else
		return f(m/2,n);
}
