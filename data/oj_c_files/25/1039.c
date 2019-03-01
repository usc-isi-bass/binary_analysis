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


int a[31] = {0};

void double_()
{
	int i;
	for (i = 0; i < 31; i++)
		a[i] = a[i] * 2;
	for (i = 0; i < 31; i++)
	{
		a[i + 1] += a[i] / 10;
		a[i] = a[i] % 10;
	}
}

int main()
{
	a[0] = 1;
	int n, i, j;
	cin >> n;
	for (i = 1; i <= n; i++)
		double_();
	for (i = 31; i >= 0; i--)
		if (a[i] != 0)
			break;
	for (j = i; j >= 0; j--)
		cout << a[j];
	cout << endl;
	return 0;
}
