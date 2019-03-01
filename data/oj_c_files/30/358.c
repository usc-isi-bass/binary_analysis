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

/**
* ??
* 2010?10?13
* ?7???????
*/
int main()
{
	int n = 0;
	cin >> n;     
	int i, x, g;     //x ??????? g???????i??????sum?????
	int sum = 0;
	for ( i = 1; i <= n ; i++)
	{
		x = i / 10;
		g = i - (i/10)*10;
		if (( i % 7 == 0 )||( i == 7) || ( x == 7) || ( g == 7))   //??i?7????i???????7?????????
		    continue;
		else 
			sum = sum + i * i;
	}
	cout << sum << endl;
	return 0;
}

