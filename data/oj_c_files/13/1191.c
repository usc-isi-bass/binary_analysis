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
	int a[20001], count[101] = {0};
	int n, i;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a[i];
		count[a[i]]++;
	}
	cout << a[1];
	count[a[1]] = 0;
	for (i = 2 ; i <= n; i++)
	{
		if (count[a[i]] >= 1)
		{
			cout << " " << a[i];
			count[a[i]] = 0;
		}
	}
	cout << endl;
	return 0;
}