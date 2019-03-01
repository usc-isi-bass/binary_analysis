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
	int n, m, num = 0;
	char h[100][100];
	int i, j, k;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> h[i][j];
		}
	}
	cin >> m;
	for (k = 0; k < m - 1 ; k++)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (h[i][j] == '@')
				{
					if ((h[i][j + 1] == '.') && j != n - 1)
					{
						h[i][j + 1] = '*';
					}
					if ((h[i][j - 1] == '.') && j != 0)
					{
						h[i][j - 1] = '*';
					}
					if ((h[i + 1][j] == '.') && i != n - 1)
					{
						h[i + 1][j] = '*';
					}
					if ((h[i - 1][j] == '.') && i != 0)
					{
						h[i - 1][j] = '*';
					}
				}
			}
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (h[i][j] == '*')
				{
					h[i][j] = '@';
				}
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			 if (h[i][j] == '@')
			 {num++;}
		}
	}
	cout << num << endl;
	return 0;
}