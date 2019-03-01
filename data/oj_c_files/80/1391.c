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

int main ()
{
	int Day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int year1,year2,month1,month2,day1,day2,days=0;
	cin >> year1 >>month1 >> day1 >> year2 >> month2 >> day2;
	while (year1!=year2)
	{
		if( (year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0))
			Day[1]=29;
		days+=Day[month1-1];
		month1++;
		if (month1==13)
		{
			year1++;
			month1=1;
			Day[1]=28;
		}
	}
	while (month1!=month2)
	{
		if( (year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0))
			Day[1]=29;
		days+=Day[month1-1];
		month1++;
	}
	days+=day2;
	days-=day1;
	cout << days << endl;
	return 0;
}
