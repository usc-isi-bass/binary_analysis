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

// ywxTest.cpp : ??????????????
//********************************
//*???1.????? **
//*?????? 1300017623 **
//*???2013.12.4  **
//********************************
int f(int n, int k, int m, int t) //??m??????
{
	if (t == 1) //?????
	{
		if (((m - k) % n == 0) && (m - k) >= n) //?????????1???
			return 0;
		else
			return 1;
	}
	if (((m - k) % n == 0) && (m - k) >= n) //?????????1???
		return f(n, k, m-k-(m-k)/n, t-1); //?????????m-k-(m-k)/n???
	else
		return 1;
}

int main()
{
	int n, k, m = 1;
	cin >> n >> k;
	while (f(n, k, m, n)) //?m????
		m++;
	cout << m;

	return 0;
}