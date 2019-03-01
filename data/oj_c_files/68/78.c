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

int prime (int x)
{
	int i,p=1;
	for (i=2;i<=sqrt(x);i++)
	{
		if (x%i==0)
		{
			p=0;break;
		}
	}
	return p;
}
int main ()
{
	int n;
	scanf ("%d",&n);
	int i=6;
	while (i<=n)
	{
		int j=3;
		while (j<=i/2)
		{
			if (prime(j))
			if (prime(i-j))
			{
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
			j++;
		}
		i+=2;
	}
	return 0;
}