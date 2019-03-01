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

//***************************************************************
//*?????(11-5) ????                                    *
//*??????                                                 *
//*???1300012888                                             *
//*???2013.11.12                                             *
//***************************************************************

int main()
{
	int num[6][6], i, j, k;

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
			cin >> num[i][j];
	}
	for (i = 1; i <= 5; i++)
	{
		num[i][0] = INT_MIN;
		for (j = 1; j <= 5; j++)
		{
			if (num[i][j] > num[i][0])
				num[i][0] = num[i][j];
		}
	}
	for (j = 1; j <= 5; j++)
	{
		num[0][j] = INT_MAX;
		for (i = 1; i <= 5; i++)
		{
			if (num[i][j] < num[0][j])
				num[0][j] = num[i][j];
		}
	}
	k = 0;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			if (num[i][j] == num[i][0] && num[i][j] == num[0][j])
			{
				k++;
				cout << i << " " << j << " " << num[i][j] << endl;
			}
		}
	}
	if (k == 0)
		cout << "not found" << endl;

	return 0;
}