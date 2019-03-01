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

int a[110][110] = {0};
void f(int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			if (a[i][j] == 1)
			{
				if (i > 0 && a[i - 1][j] == 0)
					a[i - 1][j] = 1;
				if (i < n - 1 && a[i + 1][j] == 0)
					a[i + 1][j] = 2;
				if (j > 0 && a[i][j - 1] == 0)
					a[i][j - 1] = 1;
				if (j < n - 1 && a[i][j + 1] == 0)
					a[i][j + 1] = 2;
			}
			if (a[i][j] == 2)
				a[i][j] = 1;
		}
}
int main()
{
	int n, m, i, j, sum = 0;
	char s;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin.get();
		for (j = 0; j < n; j++)
		{
			cin.get(s);
			if (s == '#')
				a[i][j] = -1;
			if (s == '@')
				a[i][j] = 1; 
		}
	}
	cin >> m;
	for (i = 1; i < m; i++)
		f(n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] == 1)
				sum++;
	cout << sum << endl;
	return 0;
}