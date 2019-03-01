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

//*************************************************
//***??????????????***
//***??????***
//***???2013.1.13***
//*************************************************
int main ()
{
	int mon[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int sy,sm,sd,ey,em,ed,distance,i,d1 = 0,d2 = 0;
	cin >> sy >> sm >> sd;
	cin >> ey >> em >> ed;
	distance = 0;
	for (i = sy; i < ey; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
			distance += 366;
		else
			distance += 365;
	}
	if ((sy % 4 == 0 && sy % 100 != 0) || sy % 400 == 0)
		mon[1] = 29;
	else
		mon[1] = 28;
	for (i = 0; i < sm - 1; i++)
	{
		d1 += mon[i];
	}
	d1 += sd;
	if ((ey % 4 == 0 && ey % 100 != 0) || ey % 400 == 0)
		mon[1] = 29;
	else
		mon[1] = 28;
	for (i = 0; i < em - 1; i++)
	{
		d2 += mon[i];
	}
	d2 += ed;
	distance += d2 - d1;
	cout << distance  << endl;
	return 0;
}