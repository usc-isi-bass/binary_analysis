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


int main()
{
	int n; //????
	cin >> n; //??
	int s=0, h=0; //??????
	for( int i=0; i<n; i++ ) //??
	{
		int a, b; //????
		cin >> a >> b; //??
		if( (90-a<=0)+(140-a>=0)+(b-60>=0)+(b-90<=0)==4 ) //??
		{
			s++;
			h = max( s, h);
		}
		else
			s = 0;
	}
	cout << h; //??
	return 0;
}
