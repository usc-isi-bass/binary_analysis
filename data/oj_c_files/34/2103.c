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
* @file 1.cpp
* @author ???
* @date 2011-11?06
* @description
* ??????:????
*/
// ??????ji???
int ji(int m)
{
	cout << m << '*' << 3 << '+' << 1;
	m = m * 3 + 1;
	cout << '=' << m << endl;
	return m; // ?m???n
}
// ??????ou???
int ou(int m)
{
	cout << m << '/' << 2;
	m = m / 2;
	cout << '=' << m << endl;
	return m;
}

int main()
{
	int n;
	cin >> n;
	while (n!=1)
	{
		if((n % 2) == 1)
		{
			n = ji(n); // ????????ji
		}
		else
		{
			n = ou(n); // ?????ou
		}
	}
	cout << "End" << endl; // ???1???
	return 0;
}