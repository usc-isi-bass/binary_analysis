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
    int w;
	cin >> w;
	switch (w % 7)
	{
	    case 0:cout << 1 << endl << 10;break;
		case 1:cout << 4 << endl << 7;break;
		case 2:cout << 9 << endl << 12;break;
		case 3:cout << 6;break;
		case 4:cout << 2 << endl << 3 << endl << 11;break;
		case 5:cout << 8;break;
		case 6:cout << 5;break;
	}
    return 0;
}