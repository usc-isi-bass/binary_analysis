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
	int num = 0, n = 0, year = 0, month = 0, day = 0, i,
		a[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cin >> year >> month >> day;
	if((year % 400 == 0)||((year % 100 != 0)&&(year % 4 == 0)))/*???????*/
		a[1] = 29;
	else a[1] = 28;
	year = (year-1) % 400;/*400??????7???*/
	n = year / 100;
	num += 2 * (year / 4 - n);/*?????????7?2*/
	num += year - (year / 4 - n);
	for(i = 0;i < month-1;i++)
	{
		num += a[i];
	}
	num += day;/*?????*/
	num = num % 7;
	switch(num)/*??????*/
	{
		case 0:cout << "Sun." <<endl;break;
		case 1:cout << "Mon." <<endl;break;
		case 2:cout << "Tue." <<endl;break;
		case 3:cout << "Wed." <<endl;break;
		case 4:cout << "Thu." <<endl;break;
		case 5:cout << "Fri." <<endl;break;
		case 6:cout << "Sat." <<endl;break;
	}
	return 0;
}