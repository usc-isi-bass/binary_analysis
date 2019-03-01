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

//***************************
//**???5.cpp
//**??????
//**???2013.11.1
//**?????????
//***************************
int main()
{
	char a[102][102];
	int n, m, num = 0;

	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	cin >> m;
	for (int k = 2; k <= m; k++)
	{
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				if (a[i][j] == '@')
				{
					a[i - 1][j] = (a[i - 1][j] == '#' || a[i - 1][j] == '@')? a[i - 1][j]: ' ';
					a[i + 1][j] = (a[i + 1][j] == '#' || a[i + 1][j] == '@')? a[i + 1][j]: ' ';
					a[i][j - 1] = (a[i][j - 1] == '#' || a[i][j - 1] == '@')? a[i][j - 1]: ' ';
					a[i][j + 1] = (a[i][j + 1] == '#' || a[i][j + 1] == '@')? a[i][j + 1]: ' ';
				}
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				a[i][j] = a[i][j] == ' '? '@': a[i][j];
	}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (a[i][j] == '@')
				num++;
	cout << num << endl;
	return 0;	
}