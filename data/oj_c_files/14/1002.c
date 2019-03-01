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
	int num[3], chinese[100000], math[100000], sum[100000];
	int m, i, n;
	cin >> n;
	for (i = 0; i < n; i ++)
	{
		cin >> m >> chinese[i] >> math[i];
		sum[i] = chinese[i] + math[i];
	}
	int largest = 0;
	for (i = 0; i < 3; i ++)
	{
		largest = 0;
		for (int j = 0; j < n; j ++)
			if (sum[j] > largest)
			{
				largest = sum[j];
				num[i] = j;
			}
		cout << num[i] + 1 << " " << sum[num[i]] << endl;
		sum[num[i]] = 0;
	}
	return 0;
}
