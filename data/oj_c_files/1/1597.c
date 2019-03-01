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

int f(int N, int min)
{
	int s=1, i;
	if(N < min)
		return 0;
	for(i = min; i < N; i++ )
	{
		if(N%i==0)
		{
			s += f(N/i, i);
		}
	}
	return s;
}

int main()
{
	int n, i, b = 2;
	int a[100];
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for(i = 0; i < n; i++)
		printf("%d\n", f(a[i], b));
	return 0;
}