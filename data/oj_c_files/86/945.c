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
    int n, m, i, j, t, a[20];
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		cin >> m;
			for(j = 0; j < m; j++)
				cin >> a[j];
			for(j = 0; j < m; j++)
			{
				t = a[j] + 3 * (j + 1);
				if(t > 60 && t < 63)
				{
					cout << a[j] << endl;
					break;
				}
				else
					if(t >= 63)
					{
						cout << 60 - 3 * j << endl;
						break;
					}
					else
						continue;
				if(t > 60)
					break;
			}
			if(j == m)
				cout << 60 - 3 * m << endl;
	}
    return 0;
}
