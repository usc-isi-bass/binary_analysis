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


int a[1010] = {0};

void f(int n)
{
	int i, u = 1000, temp = 0;
	while (a[u] == 0)
		u--;
	if (n == 0)
	{
		for (i = u; i >= 1; i--)
			cout << a[i];
		cout << endl;
		return;
	}
	for (i = 1; i <= u + 1; i++)
	{
		a[i] = a[i] * 2 + temp;
		temp = 0;
		if (a[i] >= 10)
		{
			a[i] = a[i] - 10;
			temp = 1;
		}
	}
	f(n - 1);
}

int main()
{
	int n;
	cin >> n;
	a[1] = 1;
	f(n);
	return 0;
}