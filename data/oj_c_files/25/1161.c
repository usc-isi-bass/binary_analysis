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
	int n;
	cin >> n;
	int num[50] = {0};
	int num0[50] = {0};
	int i, j;
	int k = 1;
	num[0] = 1;
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < k; j++)
		{
			num[j] = num[j] * 2;
			num0[j] = num[j] / 10;
			num[j] = num[j] % 10;
		}
		for (j = 0; j < k; j++)
			num[j + 1] += num0[j];
		if (num[k] != 0)
				k++;
	}
	for (i = k - 1; i >= 0; i--)
		cout << num[i];
	cout << endl;
	return 0;
}