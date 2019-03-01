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
	int year1, year2, month1, month2, day1, day2, count = 0, i, dofm[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2;
	count = (year2 - year1) * 365 + (year2 - year1) / 4 + (year1 % 4 - year2 % 4 > 0) - (year2 - year1) / 100 
			- (year1 % 100 - year2 % 100 > 0) + (year2 - year1) / 400 + (year1 % 400 - year2 % 400 > 0) - day1 + day2;  
	for(i = month1 - 1; i < 12; i++)
		count += dofm[i] + (judge(year1) && i == 1);
	for(i = month2 - 1; i < 12; i++)
		count -= dofm[i] + (judge(year2) && i == 1);
	cout << count;
	return 0;
}