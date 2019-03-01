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

// ????1.cpp : Defines the entry point for the console application.
//


int main()
{
	char num[31];
	char*p;
	char*m;
	int i = 0;

	cin.getline(num,31);

	int len = strlen( num );
	
	p = num;
	m = num;

	for( i = 0;i < len;i++ )
	{
		if( (*p) - '0' >= 0 && (*p) - '0' <= 9 )
			cout << *p;
		else
			if( *(p - 1) - '0' >= 0 && *( p - 1 ) - '0' <= 9 )
				cout << endl;
		p++;
		

	}

	return 0;
}