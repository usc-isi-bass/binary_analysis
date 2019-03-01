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

//*************************************************
//***???????????***
//***??????***
//***???2012.12.24***
//*************************************************
int main ()
{
	int row,col,i,j,n,a[100][100],c;
	cin >> row >> col;
	c = row * col;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cin >> a[i][j];
		}
	}
	if (row >= col)
		n = (col + 1) / 2;
	else
		n = (row + 1) / 2;
	for (i = 0; i < n; i++)
	{
		for (j = i; j < col - i; j++)
		{
			cout << a[i][j] << endl;
			c --;
		}
		if (c == 0)
			break;
		for (j = i + 1; j < row - i; j++)
		{
			cout << a[j][col - i - 1] << endl;
			c--;
		}
		if (c == 0)
			break;
		for (j = col - i - 2; j >= i; j--)
		{
			cout << a[row - i - 1][j] << endl;
			c--;
		}
		if (c == 0)
			break;
		for (j = row - i - 2; j > i; j--)
		{
			cout << a[j][i] << endl;
			c--;
		}
		if (c == 0)
			break;
	}
	return 0;
}