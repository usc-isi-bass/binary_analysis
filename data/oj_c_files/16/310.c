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
	int n,a,b,c,d,e;
	cin >> n;
	if(n <= 10000 && n >= 0)
	{
		a = n % 100000 / 10000;
	    b = n % 10000 / 1000;
	    c = n % 1000 / 100;
	    d = n % 100 / 10;
	    e = n % 10;
	    if(a!=0)
			cout << e << d << c << b << a << endl;
		else if(b!=0)
			cout << e << d << c << b << endl;
	    else if(c!=0)
		    cout << e << d << c << endl;
	    else if(d!=0)
			cout << e << d << endl;
		else
			cout << e << endl;
	}
return 0;
}
