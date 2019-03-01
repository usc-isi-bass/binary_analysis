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

int fibo(int n)
{
	if (n==1||n==2) return(1);
	return(fibo(n-1)+fibo(n-2));
}
void main()
{
	int n,i,a;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a);
		printf("%d\n",fibo(a));
	}
}