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
 * homework2.cpp
 *
 *  Created on: 2012-11-10
 *      Author: Lixurong
 */


int main()
{
	char a[100][100];
	int i=0;
	while( cin >> a[i] )//????
	{
		char c;
		cin.get(c);
		if( c=='\n' )//????????????
			break;
		i++;
	}
	for( i-1; i>=0; i-- )//????
	{
		cout << a[i];
		if( i!=0 )
			cout << " ";
	}
	return 0;
}