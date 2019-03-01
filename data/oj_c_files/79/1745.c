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
	int a[301], n, m, i, count = 0, zong = 0;
	while(1)
	{
		cin >> n >> m;
		if (n == 0 && m == 0)
			break;
		for (i = 1; i <= n; i++)
			a[i] = 1;
		i = 1;
		while(1)
		{
			if (a[i] == 1)
			{
				count++;
				if (zong == n - 1)
				{
					cout << i << endl;
					count = 0;
					zong = 0;
					break;
				}
				if(count == m)
				{
					zong++;
					a[i] = 0;
					count = 0;
					if (i < n)
						i++;
					else if (i == n)
							i = 1;
				}
				else
				{
					if (i < n)
						i++;
					else if (i == n)
							i = 1;
				}
			}
			else if (i == n)
				i = 1;
				 else	
					i++;
		}
	}
	return 0;
}
