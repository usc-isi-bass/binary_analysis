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
* @file homework.cpp
* @author ???
* @date 2011-11-3
* @description
* ??????: ??13
*/
int main()
{
	char a;
	int k, cnt = 0, flag = 1;
	while (cin >> a) // ????????
	{
		cnt = cnt * 10 + (a - '0'); // a????????cnt????????10???????
		k = cnt / 13; // k???
		if (k)
		{
			cout << k; // k??0???
			flag = 0; // ????????0??flag?0
		}
		else if (!flag) cout << "0"; // ??????0????0???
		cnt = cnt % 13; // cnt???
	}
	if (flag) cout << "0";
	cout << endl << cnt;
	return 0;
}