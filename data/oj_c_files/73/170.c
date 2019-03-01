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

//**********************
//* ??? ????    *
//* ??? 1200012878  *
//* 11?9?            *
//**********************
int main ()
{
	int a[5][5] = {{0,0}}, max[5] = {0}, min[5] = {0}, i, j, flag = 0;
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 4; j++)
			cin >> a[i][j];
	}
	for (i = 0; i <= 4; i++)
	{
		max[i] = a[i][0];
		min[i] = a[0][i];
		for (j = 1; j <= 4; j++)
		{
			if (a[i][j] > max[i])
				max[i] = a[i][j];
			if (a[j][i] < min[i])
				min[i] = a[j][i];
		}
	}
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			if (a[i][j] == max[i] && a[i][j] == min[j])
			{
				cout << i + 1 << " " << j + 1 << " " << a[i][j] << endl;
				flag = 1;
			}
		}
	}
	if (flag == 0)
		cout << "not found";
	return 0;
}






