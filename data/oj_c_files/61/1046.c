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

/*
 * 1.cpp
 *
 *  Created on: 2013-10-11
 *      Author: ??
 */

int main()
{
	int n;
	cin >> n;
	int a, sj, hc, q1;
	for (int i=1;i<=n;i++)
	{
		q1 = 1;
		sj = 1;
		cin >> a;
		for (int j=3;j<=a;j++)
		{
			hc = sj;
			sj = sj+q1;
			q1 = hc;
		}
		cout << sj << endl;
	}
	return 0;
}
