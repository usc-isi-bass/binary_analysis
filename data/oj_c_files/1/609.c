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
	int i,n;
	int fun(int n,int begin);
	scanf("%d",&i);
	while (i-->0)
	{
		scanf("%d",&n);
		printf("%d\n",fun(n,2));
	}
	return 0;
}
int fun(int n,int begin)
{
	int i,result=1;
	for (i=begin;i<=sqrt(n);i++)
		if (n%i==0)
			result+=fun(n/i,i);
	return result;
}