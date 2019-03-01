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
	int a[101][101], row, col, i, j, k, sum;
	cin >> row >> col;
	sum = row + col;
	for (i = 1; i <= row; i++)
		for (j = 1; j <= col; j++)
			cin >> a[i][j];
	for (k = 2; k <= sum ; k++)
	{
		if (k  <= col + 1)
		{
			i = 1; 
			j = k - 1;
			do
			{
				cout << a[i][j] << endl;;
				i += 1;
				j -= 1;
			}
			while (i <= row && j >= 1);
		}
		else
		{
			i = k - col;
			j = k - i;
			do
			{
				cout << a[i][j] << endl;
				i += 1;
				j -= 1;
			}
			while (i <= row && j >= 1);
		}
	}

	return 0;
}

