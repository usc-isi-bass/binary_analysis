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
	int k;
	int a[30] = {0};
	int m[30] = {0};
	cin >> k;
	cin >> a[0];
	m[0] = 1;
	int temp = 1;
	for (int i = 1; i < k; i++)
	{
		cin >> a[i];
		int tempmax = 0;
		for (int j = i-1; j >= 0; j--)
			if (a[i] <= a[j] && m[j] > tempmax) tempmax = m[j];
		m[i] = tempmax + 1;
		if (m[i] > temp) temp = m[i];
	}
	cout << temp << endl;
	return 0;
}