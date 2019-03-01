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

//*************************************
//* ????4.cpp *
//* ??????1200012844 *
//* ?????2012?10?23? *
//* ???????? *
//**************************************

int main()
{
	int year, month1, month2, month, leap, days, n, k;
	cin >> n;//??????n
	for(k = 0; k < n; k++)
	{
		days = 0;//???????0
		cin >> year >> month1 >> month2;//?????????
		leap = (year % 4==0 && year % 100 != 0) || year % 400 == 0;//???????
		if ( month1 < month2 )
			month = month1;
		else
			{month = month2;
			month2 = month1;
			}//????????????
		while( month < month2 )
		{
			switch (month)
			{
				case 2 : 
					days += 28 + leap; break;//2???????1
				case 1 :
				case 3 :
				case 5 :
				case 7 :
				case 8 :
				case 10 :
				case 12 : 
					days += 31; break;
				case 4 :
				case 6 :
				case 9 :
				case 11 : days += 30; break;
			}
			month++;
		}//???????????
		if ( days % 7 == 0 )
			cout << "YES" << endl;//?????7????????
		else
			cout << "NO" << endl;//?????
	}
	return 0;
}
			
