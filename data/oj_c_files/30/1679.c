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
	int k, sev, sum = 0, sum1 = 0, sum2 = 0, sum3 = 0;
	cin >> k;
	for (int i = 1; i <= k; i++)
		sum = sum + i * i;
	for (int i = 7; i <= k; i = i + 10)
		sum1 = sum1 + i * i;
	for (int i = 7; i <= k; i = i + 7)
		sum2 = sum2 + i * i;
	for (int i = 71; (i <= k) && (i <= 79); i++)
		sum3 = sum3 + i * i;
	sum = sum - sum1 - sum2 - sum3;
	if (k < 7)
		sum = sum;
	else if ((k >= 7) && (k < 77))
		sum = sum + 7 * 7;
	else
		sum = sum + 7 * 7 + 2 * 77 * 77;
	cout << sum << endl;
	return 0;
}
