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

int sep(int a, int b)
{
	int i;
	int ans = 0;
	if (a == 1)
		ans = 1;
	for (i = b; i <= a; i++)
	{
		if (a%i == 0)
		{
			ans += sep(a / i, i);
		}
	}
	return ans;
}
int baka(int a)
{
	int cirno;
	cirno = sep(a, 2);
	return cirno;
}
int main()
{
	int n, pre;
	int i,j;
	int ans;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &pre);
		ans = baka(pre);
		printf("%d\n", ans);
	}
}