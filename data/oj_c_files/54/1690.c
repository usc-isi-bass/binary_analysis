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
 * @file   1.cpp
 * @author ???
 * @date   2013-12-05
 * @description
 *         ????????????
 */


int n, k, get_n = 1, temp;                         // get_n???n??????????
void func(int num);                                // temp?????num??????????? 

int main()
{
	cin >> n >> k;                                 // ????

	func(n);
	cout << temp;                                  // ???????

	return 0;
}

void func(int num)
{
	if (num == n) temp = get_n * n + k;            // ?n??????????(get_n * n + k)?
	else temp = temp * n / (n - 1) + k;            // ???num???????????

	if (num == 1) return;                          // ??num??1??????????return

	if (temp % (n - 1) == 0) func(num - 1);        // ??temp????n - 1???????get_n???????????
	else                                           // ??temp?????n - 1??????get_n??1?????func(n)
	{
		++get_n;
		func(n);
	}
}