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


int main (void)
{
	int a = 0, b = 0, c = 0, i = 1;
	cin >> a;

	do
	{
		c = a%10;
		a = (a - c)/10;
		cout << c;
	}
	while (a != 0);

	cout <<endl;


	return 0;
}