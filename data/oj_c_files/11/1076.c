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
	int year, month, day;
	cin >> year >> month >> day;
	int a[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if( year % 4 == 0 && year % 100 != 0 || year % 400 == 0 )
		a[2] = 29;
	int sum = 0;
	for( int i = 1; i < month; i ++)
	{
		sum = sum + a[i];
	}
	sum = sum + day;
	cout << sum << endl;
	return 0;
}