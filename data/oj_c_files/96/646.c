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

//********************************************************
//*  ???:3.cpp                                        *
//*  ??????    1200012948                          *
//*  ????: 2012 11 10                                *
//*  ????:??13                                     *
//********************************************************
//??
int main()
{
	char a[100];
	int c, d, e, f, g, i, flag = 0;
	cin >> a;
	//?ascii?????
	if (a[1] == '\0')
	{
		cout << 0 << endl;
		cout << a[0] - '0' <<endl;
	}
	if (a[1] != '\0')
	{c = a[0] - '0'; d = a[1] - '0';
	for (i = 1; a[i] != '\0'; i++)
	{
		e = c * 10 + d;
		f = e / 13;        //??
		g = e % 13;
		//???????0
		if (flag == 0)
		{
			if (f == 0)
			    flag = 1;
			else
			{
				cout << f;
				flag = 1;
			}

		}
		else
		    cout << f;

		c = g;
		d = a[i + 1] - '0';
	}
	if (a[2] == '\0' && (a[0] - '0') * 10 + a[1] - '0' < 13)
		cout << 0;

	cout << endl;
	cout << g << endl;}
//??
	return 0;
}
