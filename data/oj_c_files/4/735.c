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

//??????????
int main()
{
	int row = 0, col = 0, i = 0, j = 0, a[100][100];
	cin >> row >> col;
	for (i = 1; i <= row; i++)
		for (j = 1; j <= col; j++)
		{
			cin >> a[i][j];
		}
		int k = 0;
		for (k = 1; k <= col; k++)
		{
			i = 1, j = k;
			while (1)
			{
				cout << a[i][j] << endl;
				if (i == row || j == 1)
					break;
				i++, j--;
			}
		}
		for (k = 2; k <= row; k++)
		{
			i = k, j = col;
			while (1)
			{
				cout << a[i][j] << endl;
				if (i == row || j == 1)
					break;
				i++, j--;
			}
		}
		return 0;
}