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

/********************************************
 *@file   5.cpp                             *
 *@author ??                              *
 *@date   2013-11-20                        *
 *@description                              *
 *??????8???2?N??               *
 ********************************************
 */
int main()
{
	int n, a[50] = {0}, l, j; // 2?100??????32??l???
	a[1] = l = 1;
	for (cin >> n; n; n--) // ?????n=0?????false??
	{
		for (j = 1; j <= l; j++)
			a[j] = a[j] * 2; // ?????2????????????????
		for (j = 1; j <= l; j++)
		{
			a[j+1] += a[j] / 10;
			if (a[l+1])
				l++;
			a[j] %= 10;
		}
	}
	for ( ; l; l--)
		cout<<a[l];
	return 0;
}

//??????????????
/*???
a1=2?a2=0?l=1		2
a1=4?a2=0?l=1		4
a1=8?a2=0?l=1		8
a1=16?a2=1?l=2?a1=6		16
a1=12?a2=2?a2=3?l=2?a1=2	32
a1=4, a2=6?l=2		64
a1=8?a2=12?a3=1?l=3?a2=2		128
a1=16?a2=4?a3=2?a2=5?l=3?a1=6		256
??????
*/