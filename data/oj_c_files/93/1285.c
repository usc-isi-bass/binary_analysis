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

//******************************
//*?????3?5?7???? **
//*????? 1300012990 **
//*???2013.09.27 **
//******************************
int main()
{
	int x;                          //????

	cin >> x;                       //????

	if (x % 3 == 0)
	{
		cout << "3";
	}
	if (x % 5 == 0)
	{
		if( x % 3 == 0)
		{
			cout << " ";

		}
		cout << "5";
	}
	if (x % 7 == 0)
	{
		if( x % 3 == 0 || x % 5 == 0)
		{
			cout << " ";
		}
		cout << "7";
	}
	if ( x % 3 != 0 && x % 5 != 0 && x % 7 != 0)
	{
		cout << "n";
	}
	return 0;
}