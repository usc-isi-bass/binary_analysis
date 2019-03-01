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
	int a[1000] = {0}, n, i, j,flag = 0;
	cin >> n;
	a[0] = 1;
	if (n == 0)
	{	cout <<"1";
	     exit(0);
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < 100;j++)
		{
			a[j] = a[j] * 2;
		}
		for (j = 0; j < 100; j++)
		{
			if(a[j] > 9)
			{
				a[j + 1] += a[j] / 10;
				a[j] = a[j]%10;
			}
		}
	}
	for (i = 99; i >=0; i--)
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
			cout << a[i];
	}
	return 0;
}

