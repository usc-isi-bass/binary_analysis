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
* @file 1000012907_1.cpp
* @author ???
* @date 2010?12?1
* @description
* ??????: ????? 
*/
int K(int a, int b);						// ??????
int main() 
{
	int t, i, M, N;
	cin >> t;								// t????????
	for (i = 0; i < t; i++)					// i?0???t-1??????????
	{
		cin >> M >> N;						// M??????N?????
		cout << K(M, N) << endl;			// ?????????
	}
	return 0;
}
int K(int a, int b)
{
	if (b == 1 || a == 1 || a == 0)			// ??????
	{
		return 1;
	}										// ??????
	if (a < 0)
	{
		return 0;
	}
	else
	{
		// ???????????????????????????????????????
		// ??????????????????????????????????N????
		// ?M???????????N-1?????M????????????????????
		// ???????N?????M????????????N?????M-N??????????
		return (K(a, b - 1) + K(a - b, b));
	}
}

	  
