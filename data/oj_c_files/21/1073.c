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


int main()
{
	int n, i, num[301], maxnum = 0, minnum = 0;
	double sub, sum = 0, average, max = 0, min = 0;
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		cin >> num[i];
		sum += num[i];
	}
	average = sum / n;
	for(i = 1; i <= n; i++)
	{
		sub = num[i] - average;
		if(sub > max)
		{
			max = sub;
			maxnum = i;
		}
		if(sub < min)
		{
			min = sub;
			minnum = i;
		}
	}
	min *= -1;
	if(max == min)
	{
		cout << num[minnum] << "," << num[maxnum] << endl;
	}
	if(max < min)
	{
		cout << num[minnum] << endl;
	}
	if(max > min)
	{
		cout << num[maxnum] << endl;
	}
	return 0;
}

