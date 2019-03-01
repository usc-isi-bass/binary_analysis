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
	int m, n;
	cin >> m >> n;
	int mount[22][22];
	int i, j;
	for(i = 0; i <= m + 1; i++)
	{
		for(j = 0; j <= n + 1; j++)
		{
			if(i == 0 || i == m + 1 || j == 0 || j == n + 1)
				mount[i][j] = 0;
			else
				cin >> mount[i][j];
		}
	}
	for(i = 1; i <= m; i++)
	{
		for(j = 1; j <= n; j++)
		{
			if(mount[i][j] >= mount[i - 1][j] && mount[i][j] >= mount[i + 1][j]
				&& mount[i][j] >= mount[i][j + 1] && mount[i][j] >= mount[i][j - 1])
				cout << i - 1 << " " << j - 1 << endl;
		}
	}
	return 0;
}
