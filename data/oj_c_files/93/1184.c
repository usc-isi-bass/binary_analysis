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
	int n ;
	cin >> n ;
	if ( n%3 == 0&& n%5 == 0)
		{
			if (n%7== 0)
				cout << "3 5 7" <<endl;
			else cout << "3 5"<<endl;
		}
	else if (n%3 != 0&& n%5 != 0)
	{
		if (n%7== 0)
				cout << "7" <<endl;
		else cout << 'n'<<endl;
	}
	else if (n%3 == 0&& n%5 != 0)
		{
			if (n%7== 0)
				cout << "3 7" <<endl;
			else cout << "3"<<endl;
		}
	else if (n%3 != 0&& n%5 == 0)
		{
			if (n%7== 0)
				cout << "5 7" <<endl;
			else cout << "5"<<endl;
		}
	return 0;
}