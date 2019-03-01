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

/********************************************
 *@file   1.cpp                             *
 *@author ??                              *
 *@date   2013-10-27                        *
 *@description                              *
 *??????6???                       *
 ********************************************
 */
int main()
{
	int num[101], number, i, j, count = 0;
	while (1)
	{
		cin >> number;
		if (number == -1)
			break;
		for (i = 1; ; i++)
		{
			num[0] = number;
			cin >> num[i];
			for (j = 0; j < i; j++)
			{
				if (num[j] > num[i] && num[j] == (num[i] * 2))
					count++;
				if (num[i] > num[j] && num[i] == (num[j] * 2))
					count++;
			}
			if (num[i] == 0)
				break;
		}
		cout << count << endl;
		count = 0;
	}
	return 0;
}