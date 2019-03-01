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
	int matrix[100][100];
	int i, j, k, x, a, b;
	for (i = 1; i <= row; i++)
		for (j = 1; j <= col; j++)
		{
			cin >> matrix[i][j];
		}
	for (k = 2; k <= row + col; k++)
	{
		a = k > col + 1? k-col:1;
		b = k > row + 1? row+1:k;
		for (x = a; x < b; x++)
		{
			cout << matrix[x][k-x] << endl;
		}
	}
	return 0;
}