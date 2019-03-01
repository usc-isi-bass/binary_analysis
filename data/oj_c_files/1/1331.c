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

void count(int, int);
int k;

int main()
{
	int n, i, j, m;
	int num;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		k = 0;
		cin >> num;
		m = sqrt(num) + 1;
		for (j = 2; j < m; j++)
			if (num % j == 0)
			{
				k++;
				count(num / j, j);
			}
		cout << k + 1 << endl;
	}
	return 0;
}
void count(int num, int i)
{
	int j;
	int n = sqrt(num);
	for (j = i; j <= n; j++)
	{
		if (num % j == 0)
		{
			k++;
			count((num / j), j);
		}
	}
}