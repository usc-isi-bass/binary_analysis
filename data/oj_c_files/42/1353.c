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
	int a[100001] = {0};
	int i, j, n, k, count = 0;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a[i];
	cin >> k;
	i = 0;
	do
	{
		if (a[i] == k)
		{
			count++;
			for (j = i; j < n; j++)
			{
				 if (a[j+1] != k)
					 a[j+1-count] = a[j+1];
				 else
					 count++;
			}
		}
		i++;
	}while (j < n);
	cout << a[0];
	for (i = 1; i < (n - count); i++)
		cout << " " << a[i];
	cout << endl;
	return 0;
}