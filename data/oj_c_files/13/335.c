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
 *  ????buchongfushu.cpp
 *  ?????????
 *  ??????
 *  ???2010.10.30
 */


int main()
{
	int n , i , j , number;
	int a[100] = {0};               //??????????????

	cin >> n;
	i = 0;
	for (j = 1 ; j <= n ; j++)
	{
		cin >> number;
		if (a[number] == 0)         //????????????           
		{
			a[number]++;
			if (i == 0)             //????????????
			{
				cout << number;
				i = 1;
			}
			else
			{
				cout << " " << number;
			}
		}
	}
	return 0;
}
