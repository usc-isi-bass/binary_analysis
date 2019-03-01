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

//************************************************************
//*????1000012912_004.cpp                                *
//*??????												 *
//*?????2010.12.09                                      *
//*???????    										 *
//************************************************************
int main()
{
	int n, m, num[200], *p = num;                //n?????m?????
	cin >> n >> m;          
	for ( p = num; p < num + n; p++ )
		if ( p + m >= num + n )                //???m????????n?
			cin >> *( p + m - n);
		else
			cin >> *(p + m);                   //????m?
	for ( p = num; p < num + n - 1; p++ )
		cout << *p << ' ';
	cout << *p << endl;
	return 0;
}