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
	int a [105], n, m, i, j,t;
	int *p = a;
	cin >> n >> m;
	for (i = 0; i <= n - 1; i ++)
		cin >> a[i];
	for (i = 1; i <= m; i++)
	{
		t = *(p + n -1);
		for (j = n - 2;j >=0; j --)
			*(p + j + 1) = * (p + j);
		*(p) = t;
	}
	for (i = 0; i <= n - 1;i ++)
	{
		if (i !=  n - 1)
			cout << a[i] << " ";
		else
			cout << a[i];
	}
	return 0;
}
