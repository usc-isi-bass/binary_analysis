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


//**********************
//* 2.cpp 



int main()
{
	int a[35] = {0}, m, i, j, p = 0;
	int b[35] = {0};
	cin >> m;
	a[34] = 1;
	for (j = 1; j <= m; j++)
	{
		for (i = 34; i >= 1; i--)
		{
			b[i] = a[i] * 2 % 10 + b[i];
			b[i - 1] = a[i] * 2 / 10 + b[i - 1];
		}
		for (i = 0; i <= 34; i++)
		{
			a[i] = b[i];
			b[i] = 0;
		}
	}
	for (i = 0; i <= 34; i++)
	{
		if (a[i] != 0)
			p = 1;
		if (p == 1)
			cout << a[i];
	}
	return 0;
}



