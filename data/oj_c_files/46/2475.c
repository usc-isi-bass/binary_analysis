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
	int a[100][100], row, col;
	cin >> row >> col;
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			cin >> a[i][j];
	int r = 0, c = 0, num = 0, n = row * col, row0 = 0, col0 = 0;
	while (true)
	{
		for (; c < col; c++)
		{
			cout << a[r][c] <<endl;
			num++;
		}
		if (num == n)
			break;
		row0++;
		c--;
		r++;
		for (; r < row; r++)
		{
			cout << a[r][c] << endl;
			num++;
		}
		if (num == n)
			break;
		col--;
		r--;
		c--;
		for (; c >= col0; c--)
		{
			cout << a[r][c] << endl;
			num++;
		}
		if (num == n)
			break;
		row--;
		c++;
		r--;
		for (; r >= row0; r--)
		{
			cout << a[r][c] << endl;
			num++;
		}
		if (num == n)
			break;
		col0++;
		r++;
		c++;
	}
	cin >> row;
	return 0;
}