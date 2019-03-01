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
	int i, j;
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			cin >> a[i][j];
	for (i = 0; i < col; i++)
		for (j = 0; j <= i; j++)
		{
			if (j < row)
			cout << a[j][i - j] << endl;
		}
	for (i = 1; i < row; i++)
		for (j = i; j < col + i; j++)
		{
			if (j < row)
			cout << a[j][col + i - j - 1] << endl;
		}

	return 0;
}