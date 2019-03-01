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

int main( )
{
	int day,mon,i,sum,xingqiji;
	cin >> day;
	sum = day + 12;
	for ( mon = 1; mon <= 12; mon++)
	{
		switch(mon)
		{
			case 1 : i = 0; break;
			case 2 : 
			case 4 : 
			case 6 : 
			case 8 :
			case 9 : 
			case 11 : i = 31; break;
			case 3 : i = 28; break;
			case 5 : 
			case 7 : 
			case 10 : 
			case 12 : i = 30; break;
		}
		sum = sum + i;
		xingqiji = sum % 7;
		if ( xingqiji == 5 ) cout << mon << endl;
	}
	return 0;
}