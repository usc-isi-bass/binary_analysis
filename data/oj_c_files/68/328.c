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


int main ()
{
	int n,j,m;
	int sushu(int a);
	scanf ("%d", &n);
	for (j=6;j<=n;j+=2)
	{
		for (m=3;m<=(n/2);m+=2)
		{
			if (sushu(m)+sushu(j-m)==2)
			{
				printf ("%d=%d+%d\n", j,m,j-m);
				break;
			}
		}
	}
	return 0;
}

int sushu (int a)
{
	int i;
	for (i=3;i<=sqrt(a);i+=2)
	{
		if (a%i==0)
		{
			return 0;
			break;
		}
	}
	return 1;
}