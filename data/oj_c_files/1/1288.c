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
/???   10(1)
/??     ???
/??     2012?11?26?
/???   ????
*/
int main()
{
	int fenjie(int x, int y);
	int a, n, i;
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		cin >> a;
cout << fenjie(a, 2) << endl;
	}
	return 0;
}
int fenjie(int x, int y)
{
	int b, i, count = 1; // ?????????
	if(x == 1)
		return 0;
	if(x == 2)
		return 1;
	b = sqrt((double) x);
	for(i = y; i <= b; i++)
	{
		if(x % i == 0)   // ?????????????????????count???
		{
			count += fenjie(x / i, i); // ????????????i??????????
		}
	}
	return count;
}