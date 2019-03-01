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
	int w;				//w????????????
	cin >> w;

	int w13 = (w + 12) % 7;			//??w13???????????
	int monthD[13] = {0,31,28,31,30,31,30,31,31,30,31,30,0};

	for (int month = 1;month <= 12;month ++)
	{
		if (w13 == 5)
			cout << month << endl;
		w13 += monthD[month];
		w13 = w13 % 7;
	}

	cin.get();
	cin.get();
	return 0;
}
