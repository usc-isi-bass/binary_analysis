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

/************************************
*???????						*
*?????? 1200012921			*
*???2012-11-30					*
*************************************/


int part(int x, int t)					//x????????
{
	int i;
	int number = 1;						//?x???????????number?
	if (x == 1)							//x=1?????
	{
		return 0;
	}
	if (x == 2)							//x=2?????????
	{
		return 1;
	}
	for (i = t; i <= sqrt(x); i++)		//???????
	{
		if (x % i == 0)					//??????
		{
			number += part(x / i, i);	//??
		}
	}
	return number;						//???????number
}

int main()
{
	int i, n, a;
	cin >> n;						//n???
	for (i = 1; i <= n; i++)		//?????????a?????????
	{
		cin >> a;
		cout << part(a, 2) << endl;
	}
	return 0;
}