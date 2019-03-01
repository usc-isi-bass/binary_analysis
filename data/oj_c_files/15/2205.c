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
	int a[101][101], n, i, j;
	int m1, l1, m2, l2;
	int sum;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			cin >> *(*(a + i) + j);
		}
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(*(*(a + i) + j) == 0 && *(*(a + i - 1) + j) != 0 && *(*(a + i) + j - 1) != 0 )
			{
				m1 = i;
				l1 = j;
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(*(*(a + i) + j) == 0 && *(*(a + i + 1) + j) != 0 && *(*(a + i) + j + 1) != 0)
			{
				m2 = i;
				l2 = j;
			}
		}
	}
	sum = (m2 - m1 - 1) * (l2 - l1 - 1);
	cout << sum << endl;
	return 0;
}