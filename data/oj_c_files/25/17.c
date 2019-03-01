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
* @date 2010-12-15
* @description
* ??????:??2?N?? 
*/
int main()
{
	int n, num[100] = {0}, count = 0;
	num[0] = 1;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= count; j++)
			num[j] *= 2;
		for (int j = 0; j <= count; j++)
		{
			if ((num[j] / 10))
			{
				num[j + 1] += num[j] / 10;
				num[j] = num[j] %10;
			}
		}
		if (num[count + 1])
			count++;
		
	}
	for (int i = count; i >= 0; i--)
		cout << num[i];
	cout << endl;
	return 0;
}
