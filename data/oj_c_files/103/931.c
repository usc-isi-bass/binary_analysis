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
 * homework3.cpp
 *
 *  Created on: 2012-12-4
 *      Author: Lixurong
 */

int main()
{
	char a[1005];
	cin >> a;
	for( int i=0; i<strlen(a); i++ )
	{
		if(a[i]<='z' && a[i]>='a')
			a[i]+='A'-'a';
	}
	char b=a[0];
	int t=0;
	for( int i=0; i<=strlen(a); i++ )
	{
		if( b==a[i] )
			t++;
		else
		{
			cout << "(" << b << "," << t << ")";
			t=1;
			b=a[i];
		}
	}
	return 0;
}
