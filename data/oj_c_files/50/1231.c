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

/* title:?????*
 * author:???*
 * time:2011.10.28*/


   


int main()
{
	int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int day[13] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int week[13] = {0};
	int weekday, i, j;
	cin >> weekday;
	for(i = 1; i <= 12; i ++)
	{
		for(j = 1; j < i; j++)
		{
			day[i] = day[i] + month[j];
		}
		day[i] = day[i] + 12;
		week[i] = (day[i] % 7 + weekday) % 7;
		if(week[i] == 5)
			cout << i << endl;
	}
	return 0;
}