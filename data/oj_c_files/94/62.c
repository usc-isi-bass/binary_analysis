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
	int n , i , j , a[501] , b[501] , count = 0 , temp;

	cin >> n;
	for (i = 0; i < n; i ++)
	{
		cin >> a[i];
		if (a[i] % 2 == 1)
			b[count ++] = a[i];
	}

	for (i = 0; i < count - 1; i ++)
	{
		for (j = 0; j < count - 1 - i; j ++)
		if (b[j] > b[j + 1])
		{
			temp = b[j + 1];
			b[j + 1] = b[j];
			b[j] = temp;
		}
	}
	cout << b[0];
	for (i = 1; i < count; i ++)
		cout << "," << b[i];
	cout << endl;

	return 0;
}