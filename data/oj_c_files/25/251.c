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

int main()
{
	int n , len = 1;   
	int num [50]  = { 0 }, *p = num , carry = 0;   
	num [ 0 ] = 1;
	cin >> n;
	while ( n -- )
	{
		p = num;
		carry = 0;
		while ( p < num + len )
		{
			*p *= 2;
			*p += carry;
			carry = 0;
			while ( *p > 9 )   
			{
				carry ++;
				*p -= 10;
			}
			p ++;
		}
		if ( carry )     
		{
			len ++;
			*p = carry;
		}
	}
	if ( *p == 0 )     
		p --;
	while ( p >= num )    
	{
		cout << *p;
		p --;
	}
	return 0;
}

