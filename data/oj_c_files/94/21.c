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
	int i, j, n, a, temp, k = 1, num[501] = {0};
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a;
		if (a % 2 == 1)
		{
			for (j = 1; j < k; j++)
			{
				if (a == num[k])
					break;
			}
			if (j == k)
			{
				num[k] = a;
				k++;
			}
		}
	}
	k -= 1;
	for (i = 0; i <= k - 1; i++)
	{
		for (j = 1; j <= k - i - 1; j++)
		{
			if(num[j] > num[j + 1])
			{
				temp = num[j + 1];
				num[j + 1] = num[j];
				num[j] = temp;
			}
		}
	}
	for (i = 1; i < k; i++)
		cout << num[i] << ",";
	cout << num[k];
	return 0;
}