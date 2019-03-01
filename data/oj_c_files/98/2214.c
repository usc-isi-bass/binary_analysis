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

//********************************
//*?????? 1300012733 **
//*???2013?12?14?
//********************************
int main()
{
	int n;
	char a[999999];
	cin >> n;
	cin.get();
	cin.getline( a , sizeof(a) );
	int l = strlen( a );
	char *p = a;
	while( p+80 <= a+l-1 )
	{
		p = p + 80;
		if( *p == ' ' )
			*p = '\n';
		else
		{
			while( *p != ' ' )
				p--;
			*p = '\n';
		}
		p++;
	}
	cout << a;
	return 0 ;
}
		