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
	int a[500] = {0};
	int n , i , j , flag = 0;
	cin >> n;
	a[499] = 1;
	for (i = 1 ; i <= n ; i++)
	{
		for (j = 499 ; j >= 0 ; j--)
		{
			a[j] *= 2;
			
		}
		for (j = 499 ; j >= 1 ; j--)
		{
			a[j - 1] += a[j] / 10;
			a[j] = a[j] % 10;
		}

		a[0] = a[0] % 10;
	}
	for (i = 0 ; i <= 499 ; i++)
	{
		if (flag == 0)
		{
			if (a[i] != 0)
			{
				flag = 1;
				cout << a[i];
			}
		}
		else
		{
			cout << a[i];
		}
	}
	cout << endl;
	return 0;
}
