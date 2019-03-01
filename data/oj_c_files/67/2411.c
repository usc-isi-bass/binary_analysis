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
 * jiweijiuliaofa.cpp
 *
 *  Created on: 2012-10-17
 *      Author: ada
 */
int main ( )
{
	int n; // n???
	double a,b ; // a??? ?b?????
	cin >> n ;
	cin >> a >> b ; //???????????
	double x ,y ; //x??????????
	( double ) (x = b / a) ;
	for ( int i = 0 ; i < n - 1 ; i++) //??????????????~
	{
		cin >> a >> b ;
		( double )(y = b / a) ;
		if ( y > x)
		{
			if ( y - x > 0.05)
				cout << "better" << endl;
			else cout << "same" << endl;
		}
		else if ( x - y > 0.05)
			cout << "worse" << endl;
		     else cout << "same" << endl;

	}
	return 0 ;
}