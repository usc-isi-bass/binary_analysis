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

//*******************
//**??????? **
//**?????	   **
//**???2013.11.3**
//**????5.cpp  **
//*******************
int main()
{
	// ??cnt??????????day???????????
	int n, i, j, m, d, cnt = 0, day[102][102] = {0};
	char a[102][102]; // ?????
	cin >> n; // ??n?????????
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			cin >> a[i][j]; // ??????????
			if (a[i][j] == '@')
				day[i][j] = 1; // ?day[i][j]???1
		}
		cin >> m; // ??m???????
		for (d = 2; d <= m; d++)
		{
			for (i = 1; i <= n; i++)
				for (j = 1; j <= n; j++)
				{
					// ???????????????????????
					if (a[i][j] == '@' && day[i][j] == d - 1)
					{
						day[i][j] = d;

						// ????????????????
						if (a[i][j - 1] == '.')
						{
							a[i][j - 1] = '@';
							day[i][j - 1] = d;
						}
						if (a[i - 1][j] == '.')
						{
							a[i - 1][j] = '@';
							day[i - 1][j] = d;
						}
						if (a[i][j + 1] == '.')
						{
							a[i][j + 1] = '@';
							day[i][j + 1] = d;
						}
						if (a[i + 1][j] == '.')
						{
							a[i + 1][j] = '@';
							day[i + 1][j] = d;
						}
					}
				}
		}
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
			{
				if (a[i][j] == '@')
					cnt++; // ???????????
			}
		cout << cnt << endl; // ??cnt
	return 0;
}