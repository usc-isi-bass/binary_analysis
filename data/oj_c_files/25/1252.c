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
	int num[101] = {0};
	num[100] = 1;
	int i, N, j;
	cin >> N;
	for(i = 1; i <= N; i++)
	{
		for(j = 1; j <= 100; j++)
		{
			if(num[j] * 2 < 10)
				num[j] = num[j] * 2;
			else
			{
				num[j] = num[j] * 2 - 10;
				num[j - 1]++;
			}
		}
	}
	for(i = 1; i <= 100; i++)
	    if(num[i] != 0) break;
	for(j = i; j <= 100; j++)
		cout << num[j];
	return 0;
}