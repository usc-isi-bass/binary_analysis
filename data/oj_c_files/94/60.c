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
* @file 8.cpp
* @author ???
* @date 2010?11?7
* @description
* ?????????????
*/
int main()
{
	int N, num, a[500], i, j = 0, flag = 1, k, temp; 
	cin >> N;
	for (i = 0; i < N; i++)
	{
		cin >> num;
		if (num % 2 != 0)
		{
			a[j++] = num;
		}
	}
	for (i = 0; i < j; i++)
	{
		for (k = 0; k < j - 1 - i; k++)
		{
			if (a[k] > a[k + 1])
			{ 
				temp = a[k];
				a[k] = a[k + 1];
				a[k + 1] = temp;
			}
		}
	}
	for (i = 0; i < j; i++)
	{
		cout << a[i];
		flag = 0;
		if (flag == 0 && i != j - 1)
		{
			cout << ",";
		}
	}
	return 0;
}

