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

int main ( )
{
	int year, month, day, num = 0, i, 
		a[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cin >> year >> month >> day;
	if((year % 400 == 0)||((year % 100 != 0)&&(year % 4 == 0)))/*???????*/
		a[1] = 29;
	else a[1] = 28;
	for(i = 0;i < month-1;i++)              /*??month-1???????*/
	{
		num += a[i];
	}
	num += day;                             /*???month?????*/
	cout << num <<endl;
	return 0;
}