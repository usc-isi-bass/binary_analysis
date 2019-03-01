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
	int N;
	cin >> N;
	const int  MAX_LEN = 210;
	unsigned num[MAX_LEN + 1] = { 0 };
	num[1] = 1;

	for (int i = 1; i <= N; i++)
	{
		for (int k = 1; k <= N; k++)
			num[k] *= 2;
		for (int k = 1; k <= N; k++)
			if (num[k] >= 10)
			{
				num[k + 1] = num[k + 1] + num[k] / 10;
				num[k] = num[k] % 10;
			}
	}
	int j = MAX_LEN;
	while (num[j] == 0)
		j--;
	for (int k = j; k > 0; k--)
		cout << num[k];
	cout << endl;
	return 0;
}