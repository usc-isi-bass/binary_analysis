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

//********************
//**?????		**
//**?????		**
//**???2013.10.30**
//**????1.cpp	**
//********************
int main()
{
	int i, j, k, m;
	for (i = 1; ; i++) // ?????????????
	{
		int num[16]; // ??1??16????????
		for (j = 1; ;j++) // ????????????
		{
			cin >> num[j]; // ??????
			if (num[j] == 0) // ?????0
				break; // ?????
		}
		if (num[1] == -1) // ????-1
			break; // ??????
		int cnt = 0; // ??????cnt????2?????
		for (k = 1; k <= j - 1; k++)
			for (m = 1; m <= j- 1; m++)
			{
				if (num[k] * 2 == num[m]) // ?????????????????
					cnt++; // cnt?1
			}
			cout << cnt << endl; // ??cnt
	}
	return 0;
}