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
 * 1.cpp
 *
 *  Created on: 2012-10-8
 *      Author: Lixurong
 */



int add( int a );

int main()
{
	int n; //????
	cin >> n ; //????
	for( int i=0; i<n; i++ )
	{
		int a; //????
		cin >> a; //????
		if( a == 1 || a == 2 )
		{
			cout << 1 << endl; //??
			continue;
		}
		cout << add(a) << endl; //????
	}
	return 0; //??
}

int add( int a ) //??????????
 {
	 if( a == 1 )
		 return 1;
	 else if( a == 2 )
		 return 1;
	 else
		 return (add(a-1) + add(a-2));
 }