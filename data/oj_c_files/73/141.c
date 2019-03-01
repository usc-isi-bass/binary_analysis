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
	int flag = 0, c = 0, max = 0, l, h;
	int a[5][5];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
		{
			cin >> a[i][j];
		}
	for (int i = 0; i <= 4; i++)
	{
		c = 0;
		l = 0;
		max = 0;
		for (int j = 0; j <= 4; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				l = j;
			}
		}
	
		for (int k = 0; k <= 4; k++)
		{
			if (max > a[k][l])
			{
				break;
			}
			c++;
		}
		if (c == 5)
		{
			cout << i + 1 << " " << l + 1 << " " << max << endl;
			flag = 1; 
		}
	}
	if (flag == 0)
	{
		cout << "not found" << endl;
	}
	return 0;
}
