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

int one(int n)
{
	if(n!=1)
	{
		if(n%2!=0)
		{
			printf("%d*3+1=%d\n",n,(n*3+1));
			n=n*3+1;
		}
		else
		{
			printf("%d/2=%d\n",n,(n/2));
			n=n/2;
		}
	}
	else
	{
		n=-1;
		printf("End");
	}
	return n;
}
int main()
{
	int n;
	scanf("%d",&n);
	do
	{
		n=one(n);
	}
	while(n!=-1);
	return 0;
}