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
	int row,col;
	int num[120][120];

	scanf("%d %d", &row, &col);

	for (int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)	scanf("%d", &num[i][j]);
	}

	for (int k = 0; k <= col + row - 1; k++)
	{
		int minRow, minCol;
		if (k < col)	minRow = 0;
		else	minRow = k - col + 1;

		if (k < row)	minCol = 0;
		else	minCol = k - row + 1;

		for (int i = minRow; i <= k; i++)
		{
			if((k-i) >= minCol)	printf("%d\n", num[i][k-i]);
		}
	}

	return 0;
}