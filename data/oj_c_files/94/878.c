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
	int i, n, k, c[100], b;
	int j=0, s = 0;
	int a[100];
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &c[i]);
		if(!(c[i]%2==0))
		{
			a[s] = c[i];
			s++;
		}

	}
	for(j=0;j<=s;j++)
	{
		for (i=0;i<s-j-1;i++)
		{
			if (a[i]>a[i+1])
				b = a[i], a[i] = a[i+1], a[i+1] = b;
		}
	}
	for(i = 0; i < s; i++)
	{
		if(i != s-1)
			printf("%d,", a[i]);
		else
			printf("%d", a[i]);
	}
	return 0;
}