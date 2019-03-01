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
	int N, i, j, t = 0, result[1000] = {0};
	cin >> N;
	result[0] = 1;
	for (i = 0; i < N; i++)
	{
		result[0] = result[0] * 2;
		for (j = 0; j < 100; j++)
		{
			if (result[j] > 9)
			{
				result[j + 1] = result[j + 1] * 2 + 1;
				result[j] = result[j] - 10;
			}
			else
			{
				result[j + 1] = result[j + 1] * 2;
			}
		}
	}
	for (i = 90; i > 0; i--)
		if(result[i] != 0)
		{
			t = i;
			break;
		}
	for (i = t; i >= 0; i--)
		cout << result[i]; 
	return 0;
}