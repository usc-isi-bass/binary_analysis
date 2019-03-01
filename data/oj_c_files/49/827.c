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

//***********************
//??????**
//???4.cpp**
//???2012.11.16**
//***********************

int main ()
{
	int i, j, n, k;
	char a[500];
	cin >> a;
	n = strlen(a);
    for (i = 2; i <= n; i ++)
	{
		for (j = 0; j <= n - i; j ++)
		{
			for (k = j; k <= j + i / 2; k ++)
			{
				if (a[k] == a[i + 2 * j - 1 - k])
					continue;
				else
					break;
			}
			if (k > j + i / 2)
			{
				for (k = j; k < j + i; k++)
					cout << a[k];
				cout << endl;
			}	
		}
	}
	return 0;
}

