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
* @file 1000012800_1.cpp
* @author ??
* @date 2010-11-18
* @description
* ??????:????
*/


int main()
{
	int n , num[500], tmp, flag = 0;
	cin >> n;
	for (int i = 0; i < n; i ++)
	{
		cin >> num[i];
	}
	for (int i = 0; i < n; i ++)
	{
		for (int j = n - 1; j > i; j --)
		{
			if (num[j] < num[j - 1])
			{
				tmp = num[j];
				num[j] = num[j - 1];
				num[j - 1] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i ++)
	{
		if (num[i] % 2)
		{
			if (!flag)
				cout << num[i];
			else
				cout << "," << num[i];
			flag ++;
		}
	}
	cout << endl;

		return 0;
}

