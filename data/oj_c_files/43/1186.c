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

/*
 *@file 5.cpp
 *@author ???
 *@date 10.24
 *@description ????????
 */

int main ()
{
	int m, x, shuchu; //??????m?????????x,?????????????
	cin >> m; //????m
	for (x = 3; x <= m/2; x += 2)
	{
		shuchu = 1;
		for (int i = 2; i <= sqrt(x); i++)
		{
			if ((x % i) == 0)
			{
                shuchu = 0;
			    break;
			}
		}
		
		if (shuchu == 1)
			{
				for (int j = 2; j <= sqrt(m-x); j++)
				{
					if (((m-x) % j) == 0)
					{
						shuchu = 0;
						break;
					}
				}
				if (shuchu == 1)
				{
					cout << x << " " << m-x << endl;
				}
			}
	}
	return 0;
}