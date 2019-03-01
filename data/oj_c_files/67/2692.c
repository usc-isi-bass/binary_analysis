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
 *@file   7.cpp
 *@author ??
 *@date   2013-10-6
 *@description
 *??????2??????
 */
int main()
{
	double n, sum, effectivenum, rate1, rate2;
	cin >> n;
	cin >> sum >> effectivenum;
	rate1 = effectivenum / sum;
	for (int i =2; i <= n; i++)
	{
		cin >> sum >> effectivenum;
		rate2 = effectivenum / sum;
		if (rate1 - rate2 > 0.05)
			cout << "worse" << endl;
		else if (rate1 - rate2 <= 0.05 && rate2 - rate1 <= 0.05)
			cout << "same" << endl;
		else if (rate2 - rate1 > 0.05 )
			cout << "better" << endl;
	}
	return 0;
}
