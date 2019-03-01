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


int jiaogu(int a)
{
	if ( a == 1 )
		return 1;
	else if ( a % 2 == 0 )
	{
		cout << a << "/2=";
		return a / 2;
	}
	else
	{
		cout << a << "*3+1=";
		return a * 3 + 1;
	}
}

int main ()
{
	int a, i;
	cin >> a;
	if ( a == 1 )
	{
		cout << "End" << endl;
	}
	else
	{
		for ( i = 0; ; i ++ )
		{
			if ( a == 1 )
			{
				cout << "End" << endl;
				break;
			}
			else
			{
				a = jiaogu(a);
				cout << a << endl;
			}
		}
	}
	return 0; 
}

