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
	int len, i, j, k, q, flag = 0;
	char a[500];
	cin >> a;
	len = strlen(a);
	for (i = 2; i <= len; i++)
	{
		for (j = 0; j <= len - i; j++)
		{
			k = 0;
			while (a[j + k] == a[j + i - 1 - k] && k < i)
			{
				k++;
			}
			if (k == i)
			{
				if (flag == 0)
					flag = 1;
				else
					cout << '\n';
				for (q = 0; q < i; q++)
				{
					cout << a[j + q];
				}
			}
		}
	}
	return 0;
}