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

// ????
int main()
{
	int a[5][5]; // ????
	// row, column????????i,j,k????? max???????
	int row = 0, column = 0, i, j, k, flag, result = 0, max; 
	for (i = 0; i < 5; i++) // ???????
		for (j = 0; j < 5; j++)
			cin >> a[i][j];
	for (i = 0; i < 5; i++) 
	{
		max = 0;
		flag = 1;
		for (j = 0; j < 5; j++) // ?????????
		{
			if (a[i][j] > max)
			{
				max = a[i][j]; // max???????
				row = i;
				column = j;
			}
		}
		for (k = 0; k < 5; k++) // ??????????????
		{
			if (max > a[k][column]) // ???????????
			{
				flag = 0;
				break;
			}
		}
			if (flag == 1) // flag??1???????????
			{
				cout << (row + 1) << " " << (column + 1) << " " << max << endl;
				result = 1; 
			}
	}
	if (result == 0) // ???????
		cout << "not found";
	return 0;
}