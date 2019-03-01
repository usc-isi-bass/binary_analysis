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
	int day = 0, y, m, d,i, month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin >> y >> m >> d;
	if(y % 400 == 0 || (y % 100 != 0 && y % 4 == 0))
		month[2] = 29;
	for(i = 1; i < m; i++)
		day += month[i];
	day += d;
	cout << day;


	return 0;
}
		
