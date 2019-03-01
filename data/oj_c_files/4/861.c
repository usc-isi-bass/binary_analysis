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
	int row, col;
	cin >> row >> col;
	int a[100][100];
	int i, j, k;
	int min;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cin >> a[i][j];
		}
	}
	if (row > col)
	{
		for (j = 0; j < col; j++)
		{
			for (i = 0, k = j; k >= 0; i++, k--)
				cout << a[i][k] << endl;
		}
		for (i = 1; i < row - col + 1; i++)
		{
			for (j = col - 1, k = i; j >= 0; j--, k++)
				cout << a[k][j] << endl;
		}
		for (; i < row; i++)
		{
			for (j = col - 1, k = i; k < row; k++, j--)
			{
				cout << a[k][j] << endl;
			}
		}
	}
	else
	{
		for (j = 0; j < row; j++)
		{
			for (i = 0, k = j; k >= 0; k--, i++)
			{
				cout << a[i][k] << endl;
			}
		}
		for (; j < col; j++)
		{
			for (i = 0, k = j; i < row; k--, i++)
			{
				cout << a[i][k] << endl;
			}
		}
		for (i = 1; i < row; i++)
		{
			for (k = i, j = col - 1; k < row; k++, j--)
			{
				cout << a[k][j] << endl;
			}
		}
	}
	return 0;
}