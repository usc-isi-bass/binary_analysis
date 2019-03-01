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
	int n,i;
	int fun(int n);
	for (i=0;i<6;i++)
	{
		scanf("%d",&n);
		printf("%d\n",fun(n));
	}
	return 0;
}
int fun(int n)
{
	int k=1,i,t=1,result=0;
	if (n<0) 
	{	
		k=-1;
		n=-n;
	}
	while (n>0)
	{
		result=result*10+n%10;
		n/=10;
	}
	return k*result;
}