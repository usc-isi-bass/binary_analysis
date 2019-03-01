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
 *@file   1.cpp                             *
 *@author ??                              *
 *@date   2013-12-13                        *
 *@description                              *
 *??????12?????                  *
 ********************************************
 */
int main()
{
	int n, m, num[110], i, *p = NULL;
	cin >> n >> m;
	for (i = 0; i < n; i++)
		cin >> num[i];
	p = num;
	p += n + m - 1; // ??????
	for (i = 0; i < n; i++)
		*(p--) = *(p - m);
	for (i = 0; i < m; i++)
		*(p--) = *(p + n);
	for (i = 0; i < n; i++)
	{
		cout << num[i];
		if (i != n - 1)
			cout << ' ';
	}
	return 0;
}