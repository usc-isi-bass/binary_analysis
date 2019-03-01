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
	int m = 0, n = 0, i = 0, j = 0;
	cin >> m >> n;
	int a[500][500];
	for(i = 0; i <= m - 1; i++)
	{
		for(j = 0; j <= n - 1; j++)
		{
			cin >> a[i][j];
		}
	}
	for(i = 0; i <= m - 1; i++)
	{
		for(j = 0; j <= n -1; j++)
		{
			if(i == 0 && j == 0)
			{
				if(a[i][j] >= a[i+1][j] && a[i][j] >= a[i][j+1])
				{
					cout << i << " " << j <<endl;
				}
			}
			else if(i == 0 && j != 0 && j != n - 1)
			{
				if(a[i][j] >= a[i+1][j] && a[i][j] >= a[i][j-1] && a[i][j] >= a[i][j+1])
				{
					cout << i << " " << j <<endl;
				}
			}
			else if(i == 0 && j == n - 1)
			{
				if(a[i][j] >= a[i+1][j] && a[i][j] >= a[i][j+1])
				{
					cout << i << " " << j <<endl;
				}
			}
			else if(i != 0 && i != m - 1 && j == 0)
			{
				if(a[i][j] >= a[i+1][j] && a[i][j] >= a[i-1][j] && a[i][j] >= a[i][j+1])
				{
					cout << i << " " << j <<endl;
				}
			}
			else if(i != 0 && i != m - 1 && j == n - 1)
			{
				if(a[i][j] >= a[i+1][j] && a[i][j] >= a[i-1][j] && a[i][j] >= a[i][j-1])
				{
					cout << i << " " << j <<endl;
				}
			}
			else if(i == m - 1 && j == 0)
			{
				if(a[i][j] >= a[i-1][j] && a[i][j] >= a[i][j+1])
				{
					cout << i << " " << j <<endl;
				}
			}
			else if(i == m - 1 && j != 0 && j != n - 1)
			{
				if(a[i][j] >= a[i-1][j] && a[i][j] >= a[i][j-1] && a[i][j] >= a[i][j+1])
				{
					cout << i << " " << j <<endl;
				}
			}
			else if(i == m - 1 && j == n - 1)
			{
				if(a[i][j] >= a[i-1][j] && a[i][j] >= a[i][j-1])
				{
					cout << i << " " << j <<endl;
				}
			}
			else 
			{
				if(a[i][j] >= a[i-1][j] && a[i][j] >= a[i+1][j] && a[i][j] >= a[i][j+1] && a[i][j] >= a[i][j-1])
				{
					cout << i << " " << j <<endl; 
				}
			}
		}
	}
	return 0;
}