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


double i = 0;
int reverse (int n);
int main ()
{
	int  n;
	while (cin >> n)
	{
		if (n == 0)
		{
			cout <<"0"<<endl;
			continue;
		}
		if ( n < 0)
		{
			cout << "-";
			n = -n;
		}

		i = 0;

		cout << reverse (n) << endl;
	}

	return 0;
}

int reverse (int n)
{
	if (n < 10)
		return n;
	int t;
	t = reverse(n/10);
	i++;
	return (n%10) * pow(10.0,i)+ t;
}