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

//
// ????2.cpp
// ???????????
// ?????? 1200012943
// ??:2012.11.2
//
int main()
{
	int a[100000], k, n, j, i = 0;
	cin >> n;
	while (i < n)
	{
		cin >> a[i];
		i++;
	}
	cin >> k;
	i = 0;
	while (i < n)
	{
		if (a[i] == k)
		{
			if (i < n - 1)
			{
				j = i;
				while (j < n - 1)
				{
					a[j] = a[j + 1];
					j++;
				}
			}
				n--;
		}
		else
			i++;
	}
	for (j = 0; j < n; j++)
	{
		cout << a[j];
		if (j < n - 1)
			cout << ' ';
	}
	cout << endl; 
	return 0;
}
