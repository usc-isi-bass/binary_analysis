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
	int a[1010], b[1010], d[1010], i = 1, n;
	char c = ',';
	for(i = 1; i <= 1010; i++)
	{
		cin >> a[i];
		if(getchar() == '\n')
			break;
	}
	n = i;
	cin >> b[1];
	for(int j = 2; j <= n; j++)
		cin >> c >> b[j];
	for(int j = 1; j <= 1010; j++)
	{
		d[j] = 0;
		for(int k = 1; k <= n; k++)
		{
			if(a[k] <= j && b[k] > j)
				d[j]++;
		}
	}
	int max = d[1];
	for(int j = 2; j <= 1010; j++)
		max = max >= d[j]? max: d[j];
	cout << n << " ";
	cout << max << endl;
	return 0;
}