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
	char a[501];
	int i, j, k, n, flag = 1;
	for (i = 0; ; i++)
	{
		cin.get(a[i]);
		if (a[i] == '\n')
			break;
	}
	n = --i;
	for (j = 1; j <= n; j++)
	{
		for (i = 0; i <= n; i++)
		{
			if (( i + j ) > n )
				continue;
			flag = 1;
			for (k = 0; k <= (j / 2) ; k++)
			{
				if (a[i + k] != a[i + j - k])
					flag = 0;
			}
			if (flag == 1)
			{
				for (k = i; k <= (i + j); k++)
					cout << a[k];
				cout << endl;
			}
		}
	}
	return 0;
}
