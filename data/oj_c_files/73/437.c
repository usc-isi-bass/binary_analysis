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
	int a[5][5] = {0};
	int i, j;
	for (i = 0; i <= 4; i++)
		cin >> a[0][i];
	
	for (i = 0; i <= 4; i++)
		cin >> a[1][i];
	
	for (i = 0; i <= 4; i++)
		cin >> a[2][i];
	
	for (i = 0; i <= 4; i++)
		cin >> a[3][i];
	
	for (i = 0; i <= 4; i++)
		cin >> a[4][i];
	int max = 0, b = 0, right = 1, flag = 0;
	for (i = 0; i <= 4; i++)
	{
		max = 0;
		right = 1;
		for (j = 1; j <= 4; j++)
		{
			if (a[i][j] > a[i][max])
				max = j;
		}
		for (b = 0; b <= 4; b++)
		{
			if (a[b][max] < a[i][max])
			{
				right = 0;
				break;
			}
		}
		if (right == 1)
		{
			cout << i + 1 << " " << max + 1<< " " << a[i][max] << endl;
			flag = 1;
		}
	}
	if (flag == 0)
		cout << "not found" << endl;
	return 0;
}