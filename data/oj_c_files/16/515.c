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
	int x,a;
	cin >> x;
	if (x == 0)
		cout << "0";
	else
	{
	    while (x != 0)
	    {
		    a = x % 10;
		    x = x / 10;
		    cout << a;
	    }
	}
	cin.get();
    cin.get(); //????
	return 0;
}