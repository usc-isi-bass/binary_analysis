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
	int n; 
	cin >> n; 
	int mod;

	if (n == 0)
	{
		cout << 0 << endl;
	}
	else
	{

		while (n != 0)
		{
			mod = n % 10;
			cout << mod;
			n /= 10;
		}
	}

	cout << endl;

	return 0;
}