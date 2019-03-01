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
	int n, max = -99999, min = -max, sum = 0;
	double p;
	int num[300];
	int i, j, k;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> num[i];
		if (num[i] < min)
			min = num[i];
		else if (num[i] > max)
			max = num[i];
		sum += num[i];
	}
	p = (double)sum / n;
	if (fabs(max - p - p + min) < 0.000001)
		cout << min << ',' << max;
	else
	{
		if(max - p > p - min)
			cout << max;
		else
			cout << min;
	}
	return 0;
}

