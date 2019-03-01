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

//********************************
//********************************
//***?????? 1200012776
//***??: ????
//***??: 2012?11?11?
//********************************
//********************************
int main()
{
	int n, m, i, j, k, sick = 0;
	char room[101][101] = {0}, room_before[101][101];
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cin >> room_before[i][j];
		}
	}
	cin >> m;
	for (k = 1; k < m; k++)	//k??????????
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				room[i][j] = room_before[i][j];
			}
		}
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (room_before[i][j] == '@')	//?????????
				{
					if (room_before[i - 1][j] == '.')	//?????????????
					{
						room[i - 1][j] = '@';
					}
					if (room_before[i + 1][j] == '.')	//?????????????
					{
						room[i + 1][j] = '@';
					}
					if (room_before[i][j - 1] == '.')	//?????????????
					{
						room[i][j - 1] = '@';
					}
					if (room_before[i][j + 1] == '.')	//?????????????
					{
						room[i][j + 1] = '@';
					}
				}
			}
		}
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				room_before[i][j] = room[i][j];
			}
		}
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (room[i][j] == '@')
			{
				sick++;
			}
		}
	}
	cout << sick << endl;
	return 0;
}