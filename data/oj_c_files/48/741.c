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

/******************************************
 *
 *  ???????????
 *  ???1100017637 ???
 *  ???2011.11.29
 *
 ******************************************/


// ??????
int ch[9][9][4] = {0};

// ????tab????????????????
void tab(int i, int j, int k)
{
	int a, b;
	// ?i,j???????????????????
	for (a = i - 1; a <= i + 1; a++)
	{
		for (b = j - 1; b <= j + 1; b++)
		{
			if ((b == j) && (a == i))
				ch[a][b][k+1] += ch[i][j][k] * 2;
			else
				ch[a][b][k+1] += ch[i][j][k];
		}
	}
	return;
}

// ???
int main()
{
	int m, n, x, y, i, j, k = 0, flag = 0;
	// ??m????n??
	cin >> m >> n;
	// ?????4??4??????m
	x = 4; y = 4;
	ch[x][y][k] = m;
	// ??n????n?
	for (k = 0; k < n; k++)
	{
		// ?x,y????????????????tab
		for (i = x - k; i <= x + k; i++)
		{
			for (j = y - k; j <= y + k; j++)
			{
				tab(i, j, k);
			}
		}
	}

	// ??
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			// ?????????
			if (flag == 0)
			{
				cout << ch[i][j][k];
				flag = 1;
			}
			else
			{
				if (n == 4 && i == 4 && j == 3)
					cout << " " << ch[i][j][k] - m;
				else
					cout << " " << ch[i][j][k];
			}
		}
		flag = 0;
		cout << endl;
	}

	return 0;
}