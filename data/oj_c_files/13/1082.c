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
	int n, a[20000], i, b[101] = {0}, flag = 0;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(i = 0; i < n; i++)
	{
		if(b[a[i]] == 0)
		{
			if(flag == 0)
			{
				cout << a[i];
				flag =1;
			}
			else
			{
				cout << ' ' << a[i];
			}
			b[a[i]] = 1;
		}
		else continue;
	}
	cout << endl;
	return 0;
}