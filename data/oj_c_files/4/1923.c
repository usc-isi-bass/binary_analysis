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

//*************************
//????:????
//?? ? ?? ??;1300012814
//**************************
int main ()
{
	int a[100][100], row, col;

	cin >> row >> col;
	for (int i = 0; i < row; i++)
	{
	for (int j = 0; j < col; j++)
	{
	cin >> a[i][j];
	}
	}
	for (int i = 0; i <= row + col - 2; i++)
	{
	for (int j = 0; j < row; j++)
	{
	if (j >= 0&& j < row && i - j >= 0&& i - j < col)
		cout << a[j][i - j] << endl;
	else continue;
	}
	}

	return 0;
}