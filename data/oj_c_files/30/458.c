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

/*  ???:?7???????
    ???:1000012896 leo
	????:??7???????
	????:2010.10.17
	*/
int main ()
{
	int n,i = 0,sum = 0;//????
	cin >> n;
	while (i <= n-1)  

	{
		i++;
        if (i % 7 == 0) continue;//?7????????
        if ( i / 10 ==7) continue;//????????7?????
	    if ( (i - (i / 10) * 10) == 7) continue;//????????7?????
        sum  =  sum + i * i;
	}
	cout << sum << endl;
	return 0;
}
