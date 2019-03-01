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

/*************************
 ***??:??? 1200012776
 ***????:????
 ***??:2012?12?19?
 *************************/
int main()
{
	int n, i, j, k, m, sum = 0;
	cin >> n;
	char room[102][102] = {0};
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cin >> room[i][j];
		}
	}
	cin >> k;
	for (m = 0; m < k - 1; m++)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (room[i][j] == '!')
				{
					room[i][j] = '@';
				}
			}
		}
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (room[i][j] == '@')
				{
					if (room[i - 1][j] == '.')
						room[i - 1][j] = '!';
					if (room[i + 1][j] == '.')
						room[i + 1][j] = '!';
					if (room[i][j - 1] == '.')
						room[i][j - 1] = '!';
					if (room[i][j + 1] == '.')
						room[i][j + 1] = '!';
				}
			}
		}
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (room[i][j] == '!' || room[i][j] == '@')
				sum++;
		}
	}
	cout << sum << endl;
	return 0;
}


