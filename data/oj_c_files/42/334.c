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
	int n, a[100002] = {0}, i, m = 0, j, k;

	cin >> n;

	for (i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	cin >> k;

	for (i = 1; i <= n - m; i++)
	{
		if (k == a[i])
		{
			m++;

			for (j = i; j <= n - m; j++)
			{
				a[j] = a[j+1];
			}
			
			i--;
		}
	}

	cout << a[1];

	for (i = 2; i <= n - m; i++)
		cout << " " << a[i];

	cout << endl;

	return 0;
}


