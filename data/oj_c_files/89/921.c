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

int main ()
{
	int n, i, counta, countb, person1[50000], person2[50000];
	int flag = 0;
	int *Person1, *Person2;
	cin >> n;
	for ( Person1 = person1, Person2 = person2; ; Person1 ++, Person2 ++ )
	{
		cin >> *Person1 >> *Person2;
		if ( *Person1 == 0 && *Person2 == 0 )
			break;
	}
	for ( i = 0; i < n; i ++ )
	{
		counta = 0;
		countb = 0;
		for ( Person1 = person1, Person2 = person2; ; Person1 ++, Person2 ++ )
		{
			if ( *Person1 == 0 && *Person2 == 0 )
				break;
			if ( *Person1 == i )
				counta ++;
			if ( *Person2 == i )
				countb ++;
		}
		if ( counta == 0 && countb == n - 1 )
			cout << i << endl;
	}
	return 0;
}

