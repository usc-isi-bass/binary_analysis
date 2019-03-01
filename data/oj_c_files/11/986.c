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
	int i, year, month, day, n = 0;
	cin >> year >> month >> day;
	int pin[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int run[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if((year % 4 == 0 && year % 100 !=  0) || year % 400 == 0)
	{
		if(month >= 2)
		{
			for(i = 0; i <= month - 2; i++)
			{
		    	n = n + run[i];
			}
			n = n + day;
		}
		if(month == 1)
		{
			n = day;
		}
	}		 
	else
	{
		if(month >= 2)
		{
			for(i = 0; i <= month - 2; i++)
			{
		    	n = n + pin[i];
			}
			n = n + day;
		}
		if(month == 1)
		{
			n = day;
		}		
	}
	cout << n << endl;
	return 0;
}