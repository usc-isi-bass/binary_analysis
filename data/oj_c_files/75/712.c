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

//***************************************
//* ????????                    *
//* ????? 1300017657               *
//* ???2013.10.30                    *
//***************************************

int main()
{
	int a[1000];                              // a[]???????????????
	for (int i = 0; i < 1000; i++) a[i] = 0;  // ?????
	int n = 0, x, y;                          /* n??????????
	x??????????y?????????*/
	char ch = ',';

	while (ch == ',')
	{
		cin >> x;
		ch = cin.get();
		for (int j = x; j < 1000; j++) a[j]++;
		n++;
	}                                         // ?????????????????????1

	ch = ',';
	while (ch == ',')
	{
		cin >> y;
		ch = cin.get();
		for (int m = y; m < 1000; m++) a[m]= a[m] - 1;
	}                                         // ?????????????????????1

	int max = 0;
	for (int k = 0; k < 1000; k++)
	{
		if (a[k] > max) max = a[k];
	}                                         // ???????????????max

	cout << n << " " << max;
	return 0;
}

		