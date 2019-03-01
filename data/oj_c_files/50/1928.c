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

//************************************************
//*  ??? 1.cpp                                *
//*  ?? :???  1200012948                    *
//*  ???2012 11 09                            *
//*  ????????                            *
//************************************************
int main()
{
	//????????????
	int a[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int n, i, b, sum = 0;
	cin >> n;
	//?????
	for (i = 1; i <= 12; i++)
	{
		sum += a[i - 1];
		b =  sum + 12;
		//????
		if (((b % 7) + n ) % 7 == 5)
		{
			cout << i << endl;
		}
	}
	return 0;
}
