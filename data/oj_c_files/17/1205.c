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


char c[101], a[101] = { ' ' };
int leftpos[101] = { 0 }, leftnum = 0;

void function(int pos)
{
	if (pos == strlen(c))
	{
		a[pos] = '\0';
		cout << c << endl;
		cout << a << endl;
		return;
	}
	if (c[pos] == '(')
	{
		leftpos[leftnum] = pos;
		a[pos] = '$';
		leftnum += 1;
		function(pos + 1);
	}
	else 
	{
		if (c[pos] == ')')
		{
			if (leftnum == 0)
			{
				a[pos] = '?';
				function(pos + 1);
			}
			else
			{
				a[pos] = ' ';
				leftnum -= 1;
				a[leftpos[leftnum]] = ' ';
				function(pos + 1);
			}
		}
		else
		{
			a[pos] = ' ';
			function(pos + 1);
		}
	}
}


int main()
{
	for (; cin.getline(c, 101);)
	{
		function(0);
		leftnum = 0;
		for (int i = 0; i < 101; i++)
			leftpos[i] = 0;
	}
	return 0;
}

