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
	int n;
	cin >> n;
	int a[100000];
	int i, j, k;
	for (i = 0; i<= n - 1; i++)
	{
		cin >> a[i];
	}
	cin >> k;
	for (i = n - 1; i >= 0; i--)
	{
		if (a[i] != k)
		{
			j = i;
			break;
		}
	}
	for (i = 0; i <= n - 1; i++)
	{
		if (a[i] != k)
		{	
			if (i != j)
				cout << a[i] << " ";
			else
				cout << a[i] << endl;
		}
	}
	return 0;
}