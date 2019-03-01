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
	int x,a,b,c,n;
	cin >> x;
	if (x%3==0)
		a=1;
	else 
		a=0;
	if (x%5==0)
		b=2;
	else
		b=0;
	if (x%7==0)
		c=4;
	else 
		c=0;

	n = a+b+c;

	if (n==7)
	{
		cout << "3 5 7" << endl;
	}
	else if (n==6)
	{
		cout << "5 7" << endl;
	}
	else if (n==5)
	{
		cout << "3 7" << endl;
	}
	else if (n==4)
	{
		cout << "7" << endl;
	}
	else if (n==3)
	{
		cout << "3 5" << endl;
	}
	else if (n==2)
	{
		cout << "5" << endl;
	}
	else if (n==1)
	{
		cout << "3" << endl;
	}
	else if (n==0)
	{
		cout << "n" << endl;
	}
	return 0;
}