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
	int i, j, len = 1, n;
	int ans[50] = {0};
	cin >> n;
	ans[0] = 1;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < len; j++)
		{
			ans[j] = ans[j] * 2;
		}
		for (j = 0; j < len; j++)
		{
			if (ans[j] > 9)
			{
				ans[j] -= 10;
				ans[j + 1] += 1;
				if (j == len - 1)
				{
					len++;
					break;
				}
			}
		}
	}
	for (i = 0; i < len; i++)
	{
		cout << ans[len - i - 1];
	}
	return 0;
}