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
 * @file 4.cpp
 * @author ??? 1300012960
 * @date 2013-11-01
 * @description
 * ??????: ???? */
int main()
{
	int n[31], m, flag;         // lg2 = 0.3010 ?????2^100?31? m???? flag????????0
	cin >> m;
	for (int i = 0; i < 30; i++) n[i] = 0;    // ????????0
	n[30] = 1;   // ???? 2^0 = 1
	for (int i = 0; i < m; i++)
	{
		for (int j = 30; j >= 0; j--)
		{
			n[j] *= 2;     // ????????????*2
		}
		for (int j = 30; j > 0; j--)
		{
			if (n[j] >= 10)
			{
				n[j - 1] += n[j] / 10;      // ??????????
				n[j] %= 10;
			}
		}
	}
	for (int i = 0; i < 31; i++)
	{
		if (n[i] > 0)
		{
			flag = i;      // ????????
			break;
		}
	}
	for (int i = flag; i < 31; i++) cout << n[i];   // ????
	return 0;
}