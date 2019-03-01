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

/*
 * ????ercha.cpp
 * ?????x,y,?xi.
 * ????: 2012-11-30
 * ??: ?   ?
 */



int main()
{
	int x = 0, y = 0;//?????????
	cin >> x >> y;//??????
	while ( x != y )
	{
		if ( x > y )  x = x/2;//??x>y,??x?????
		else y = y/2;//???y?????
	}
	cout << x << endl;//?????
	return 0;//????
}
