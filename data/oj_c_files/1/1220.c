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


int c = 1;

void fenjie(int a, int k)
{
	if (a == 1) 
	{
		c++;
		return;
	}
	for (int i = k; i <= a; i++)
	{
		if (a % i == 0)
		{
			fenjie(a / i, i);
		}
	}
}

int main()
{
	int n, a;
	cin >> n;
	while (n--)
	{
		c = 0;
		cin >> a;
		fenjie(a, 2);
		cout << c << endl;
	}
	return 0;
}
