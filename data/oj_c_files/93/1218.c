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
	int x, front_number_exist;
	front_number_exist = false;
	cin >> x;
	if (x % 3 == 0)
	{
		front_number_exist = 1;
		cout << 3;
	}
	if (x % 5 == 0)
	{
		if (front_number_exist)
		{
			cout << " 5";
		}
		else
		{
			front_number_exist = 1;
			cout << "5";
		}
	}
	if (x % 7 == 0)
	{
		if (front_number_exist)
		{
			cout << " 7";
		}
		else
		{
			front_number_exist = 1;
			cout << "7";
		}
	}
	else
	{
		if (front_number_exist == 0)
		{
			cout << "n";
		}
	}
	return 0;
}
