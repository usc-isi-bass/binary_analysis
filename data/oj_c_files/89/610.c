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
	int a[100000], b[100000], i, j, n, k = 0, m = 0, count[10000] = {0};
	cin >> n;
	for(i = 0; ;i++)
	{
		cin >> a[i] >> b[i];
		if(a[i] == 0 && b[i] == 0)
			break;
		m++;
	}
	for(i = 0; i < n; i++)
	{	for(j = 0; j < m; j++)
			if(b[j] == i)
				count[i]++;
	}
	for(i = 0; i < n; i++)
		if(count[i] == n - 1)
		{
			k = 1;
			for(j = 0; j < m; j++)
				if(a[j] == i)
					break;
			if(j == m)
			{
				cout << i << endl;
				break;
			}
			else
			{
				k = 0;
				break;
			}
		}
	if(k == 0)
		cout << "NOT FOUND" << endl;
	return 0;
}