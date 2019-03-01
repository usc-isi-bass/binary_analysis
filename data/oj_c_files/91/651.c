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
	char c[201] , *p = c , temp;
	cin.getline( c , 200 );
	temp = *c;
	while ( *p )        //?????????/0
	{
		*p += *( p + 1 );
		p ++;
	}
	*( p - 1 ) += temp;  //????????
	cout << c <<endl;
	return 0;
}