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
* @file 1000012800_2.cpp
* @author ??
* @date 2010-10-27
* @description
* ??????:????
*/

int main()
{
	int n, i = 0, m;
	cin >> n;
	int num[100000];
	for (; i < n; i ++)
	{
		cin >> num[i];
	}
	cin >> m;
	for (i = 0; i < n; i ++)
	{
		if ( m == num[i])
		{
			int j = i;
			for (; j < n - 1; j ++)
			{
				num[j] = num[j + 1];
			}
			n --;
			i --;
		}
	}

	cout << num[0];
	for (i = 1; i <= (n - 1); i ++)
		cout << " " << num[i];
	cout << endl;
	return 0;
}
