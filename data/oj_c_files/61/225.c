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
	int f(int x);
	int num,i,a[10000]={0},b;
	scanf("%d", &num);
    for(i=1;i<=num;i++)
	{
		scanf("%d", &b);
		a[i]=f(b);
	}
	for(i=1;i<=num;i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}
int f(int x)
{
	if(x==1 || x==2) return 1;
	else
	{
		int c;
		c=f(x-1)+f(x-2);
		return c;
	}
}