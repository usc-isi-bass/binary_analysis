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



int Fibonacci(int x);
int main()
{
	int n,a[100];
	int i,num[100];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		num[i]=Fibonacci(a[i]);
	}
	for (i=0;i<n;i++)
	{
		printf("%d\n",num[i]);
	}
	return 0;
}
int Fibonacci(int x)
{
	int result=0;
	if (x==1 ||x==2)
	{
		result=1;
		return result;
	}
	else
	{
		result=Fibonacci(x-1)+Fibonacci(x-2);
		return result;
	}
}