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


int F(int x)
{
	if (x == 2 || x == 1)
		return 1;
	return F(x - 1) + F(x - 2);
}

int main()
{
	int a, n;
	cin >> n;
	for(; n > 0; n--)
	{
		cin >> a;
		cout << F(a) << endl;
	}
}