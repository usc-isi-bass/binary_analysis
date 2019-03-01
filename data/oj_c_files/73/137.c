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
	int a[5][5];
	int i,j;
	int column[5];
	int max,exist,flag;
	exist = 0;
	flag = 0;
    for (i = 0; i <= 4; i++)
		for (j = 0; j <= 4; j++)
		{
			cin >> a[i][j];
		}
	for (i = 0; i <= 4; i++)
	{
		max = a[i][1];
		column[i] = 1;
		for (j = 0; j <= 4; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				column[i] = j;
			}
		}
	}
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			if (a[i][column[i]] > a[j][column[i]])
			{
				exist = 0;
				break;
			}
			else
				exist = 1;
		}
		if (exist == 1)
		{
			cout << i+1 << " " << column[i]+1 << " " << a[i][column[i]] << endl;
			flag = 1;
		}
	}
	if (flag == 0)
		cout << "not found" << endl;
return 0;
}