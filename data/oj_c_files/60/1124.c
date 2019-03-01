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

int sushu(int x)
{
	int i,t=1;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			t=0;
		}
	}
	return t;
}
int main()
{
	int i,n,a,b,t=0;
	scanf("%d",&n);
	for(i=4;i<=n;i++)
	{
		a=i-2;
		b=i;
		if(sushu(a)&&sushu(b))
		{
			t=1;
			printf("%d %d\n",a,b);
		}
	}
	if(t==0)
	{
		printf("empty");
	}
	return 0;
}