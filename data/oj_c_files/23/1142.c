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
 * shuzu2.13.cpp
 *
 *  Created on: 2012-11-20
 *      Author: wangrunhui
 */


int main()
{
	char str[105][105];
	int i,j;
	for ( i = 0; ;i ++ )
	{
		str[i][0] = 0;
		cin >> str[i];
		if ( str[i][0] == 0)
			break;
	}
	cout << str[i - 1] ;
	for ( j = i - 2; j >= 0; j --)
		cout << ' ' << str[j];
	return 0;
}
