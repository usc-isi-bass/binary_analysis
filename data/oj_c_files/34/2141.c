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


void num(int a)
{
	int m;
	do
	{
		if (a % 2 != 0)
		{
			m = a;
			a = a * 3 + 1;
			cout <<m << "*3+1=" << a <<'\n';
		}
		else 
		{
			m = a;
			a = a / 2;
			cout << m << "/2=" << a <<'\n';
		}
	} while (a > 1);
	if (a == 1)
		cout << "End";
}

int main()
{
	int a;
	cin >> a;
	if(a == 1)
		cout << "End";
	else
		num(a);
	return 0;
}

