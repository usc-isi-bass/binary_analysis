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
* @file 1000012907_2.cpp
* @author ???
* @date 2010?12?4
* @description
* ??????: ????
*/
int f(int n);
int main() 
{
	int num;
	cin >> num;
	f(num);
	return 0;
}
int f(int n)
{
	if (n == 1)
	{
		cout << "End";
	}
	else if (n % 2 == 0)
	{
		cout << n << "/" << "2" << "=" << n / 2 << endl;
		return f(n / 2);
	}
	else 
	{
		cout << n << "*" << "3" << "+" << "1" << "=" << 3 * n + 1 << endl;
		return f(3 * n + 1);
	}
}
