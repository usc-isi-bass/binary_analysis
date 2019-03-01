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
	int row, col, array[100][100], i, j, temp = 0;
	cin >> row >> col;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cin >> array[i][j];
		}
	}
	while (temp < col)
	{
		j = temp;
		i = 0;
		while (i < row && j >= 0)
		{
			cout << array[i++][j--] << endl;
		}
		temp++;
	}
	if (row > 1)
	{
		temp = 1;
		while (temp < row)
		{
			j = col - 1;
			i = temp;
			while (i < row && j >= 0)
			{
				cout << array[i++][j--] << endl;
			}
			temp++;
		}
	}
	return 0;
}