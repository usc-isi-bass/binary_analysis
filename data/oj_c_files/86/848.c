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

//????
//2010?11?19?
//1000012753 ???
int main()
{
	int n, m, i, sum, stop, a[200] = {0};
	cin >> n;
	while (n--)
	{
		cin >> m;
		for (i = 0; i < m; i++)
			cin >> a[i];
		while (1)
		{
			if (m == 0)
			{
				sum = 60;
				break;
			}
			if (a[m - 1] + (m - 1) * 3 > 60)
				m--;
			else if (a[m - 1] + (m - 1) * 3 >= 57 && a[m - 1] + (m - 1) * 3 <= 60)
			{
				sum = a[m - 1];
				break;
			}
			else
			{
				sum = 60 - m * 3;
				break;
			}
		}
		
		cout << sum << endl;
	}
	return 0;
}
