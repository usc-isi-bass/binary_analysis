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

// ?????.cpp : ??????????????
//




int main()
{
	int w,k,month,daysum = 0,a[13],i=0;
	cin >> w;
	for (month = 1;month <= 12;month++)
	{
		if ((daysum + 13) % 7 == (13 - w) % 7)
		{
			a[i] = month;
			i++;
		}
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			daysum = daysum + 31;
		}
		if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			daysum = daysum + 30;
		}
		if (month == 2)
		{
			daysum = daysum + 28;
		}
	}
	for (k=0;k<=i-1;k++)
	{
		cout << a[k] << endl;
	}
	return 0;
}
