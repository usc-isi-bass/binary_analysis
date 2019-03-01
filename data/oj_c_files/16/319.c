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

/* title:?????? *
 * author:???*
 * time:2011.9.28*/

   


int main()
{
	int n, a, b, c, d;
	cin >> n;
	a = n / 1000;
	b = (n % 1000) / 100;
	c = (n % 100) / 10;
	d = n % 10;
	if(a != 0)
	{
    	cout << d << c << b << a << endl;
	}
	else if (b != 0)
	{
		cout << d << c << b << endl;
	}
	else if (c != 0)
	{
		cout << d << c << endl;
	}
	else 
	{
		cout << d << endl;
	}
    return 0;
}
