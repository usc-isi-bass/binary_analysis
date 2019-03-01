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
 *@date 11?1?
 *@description ?????
 */

int main ()
{
	int x[1000], y[1000], t[1000] ={0}, max;
	int i, j, k;
	max = 0;
	char ch;
	for (i = 0; ; i++)
	{
		cin >> x[i];
		ch = cin.get();
		if (ch != ',')
			break;
	}
	for (i = 0; ; i++)
	{
		cin >> y[i];
		ch = cin.get();
		if (ch != ',')
			break;
	}
	for (j = 0; j <= i; j++)
	{
		for (k = x[j]; k < y[j]; k++)
		{
			t[k] = t[k] + 1;
			if (t[k] > max) 
				max = t[k];
		}
	}
		
	cout << i + 1 << " " << max;
	return 0;
}