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
	int n, i;
	double num[300], sum = 0, min = 10000, max = 0, temp = 0;
	double aver;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> num[i];
		sum += num[i];
	}
	aver = 1.0 * sum / n;
	for (i = 0; i < n; i++)
	{
		if (fabs(num[i] - aver) >= temp)
		{
			temp = num[i] - aver;
			if (num[i] >= max)
				max = num[i];
			if (num[i] <= min)
				min = num[i];
		}
	}
	if (min == max)
		cout << min << endl;
	else if ((max - aver) - (aver - min) > 0)
		cout << max << endl;
	else if ((max - aver) - (aver - min) < 0)
		cout << min << endl;
	else
		cout << min << "," << max << endl;
	return 0;
}