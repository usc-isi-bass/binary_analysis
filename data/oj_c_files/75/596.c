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

/**
 * @file   5.cpp
 * @author ???
 * @date   2013-10-30
 * @description
 *         ????????????
 */



int main()
{
	int a[1000], b[1000], t[1000] = {0}, k = 1, c = 0;    // ??a?b??????????t????????????

	cin >> a[0];
	
	while (cin.get() == ',')                   // ??????????????????i??????
	{
		cin >> a[k];
		++k;
	}

	cout << k;                                 // ?????????

	cin >> b[0];

	k = 1;

	while (cin.get() == ',')                   // ???i??????
	{
		cin >> b[k];
		++k;
	}

	for (int i = 0; i < k; ++i)                // ????????????
	{
		for (int j = a[i]; j < b[i]; ++j)
			++t[j];
	}

	for (int n = 1; n < 1000; ++n)             // ????????????
	{
		if (t[n] > t[c]) c = n;		
	}

	cout << " " << t[c];

	return 0;
}