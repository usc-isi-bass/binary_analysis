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
	int hours;
	cin >> hours;
	int maxNormHours = 0;
	int normHours = 0;
	for (int i=1 ; i<= hours ; i++)
	{
		int max,min;
		cin >> max >> min;
		if ((max >= 90) && (max <= 140)&&
			(min <= 90) && (min >= 60) == 1)
			normHours ++;
		else
		{
			if (normHours > maxNormHours)
				maxNormHours = normHours;
			normHours = 0;
		}
	}
	if (normHours > maxNormHours)
	maxNormHours = normHours;
	cout << maxNormHours << endl;
	cin.get();
	cin.get();
	return 0;
}