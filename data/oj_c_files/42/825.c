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

/**
* @file 1.cpp
* @author ???
* @date 2011-10?14
* @description
* ??????:??????
*/
int main()
{
	int n, a[100000], i, j, k, l, dn, ct;
	cin >> n;
	ct = n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> dn;
	for (j = n-1 ; j >= 0; j--)
	{
		if (a[j] == dn)
		{
			ct--;
			for (l = j; l < n; l++)
			{
				a[l]=a[l + 1];
			}
		}
	}
	for (k = 0; k<ct ; k++)
	{
		if (k != (ct - 1))
			cout << a[k] <<' ';
		else
			cout << a[k];
	}
	return 0;
}
