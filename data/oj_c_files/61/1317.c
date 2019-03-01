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


int fac(int);

int main()
{
	int n, y, times;
	cin >> times;
	for (int i = 0; i < times; i++)
	{
	    cin >> n;
	    y = fac(n);
	    cout << y << endl;
	}
	
	return 0;
}

int fac(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return fac(n - 1) + fac(n - 2);
}