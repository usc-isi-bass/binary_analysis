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

//??-????????
//2010?11?01?
//1000012753 ???


int main()
{
	int n, i, j, a[20002];

	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	cout << a[0];

	for (i = 1; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (a[j] == a[i])
			{
				break;
			}
		}

		if (j == i)
		{
			cout << " " << a[i];
		}
	}

	cout << endl;

	return 0;
}

