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

//****************************************************************
// ????1000012789_2.cpp                                      *
// ???wusy                                                    *
// ???12,15                                                   *
// ???2?N?                                                  *
//****************************************************************
int main()
{           
	int a[50], n, i, j;
	cin >> n;

	memset(a, 0, sizeof(a));
	a[0] = 1;
	for (i = 0; i < n; i++)
	{
		for(j = 0; j < 50; j++)
			a[j] = a[j] * 2;
		for(j = 0; j < 50; j++)
		{
			if(a[j] >= 10)
			{
				a[j + 1] = a[j + 1] + a[j] / 10;
				a[j] = a[j] % 10;
			}
		}
	}
	for (i = 49; i >= 0; i--)
		if (a[i] != 0)
			break;
	for (; i >=0; i--)
		cout << a[i];
	return 0;
}

				


