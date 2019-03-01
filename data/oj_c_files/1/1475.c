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

//**********************
//* ???   ????  *
//* 1200012878 ???  *
//* 12?1?            *
//**********************
int fengjie(int a, int b)
{
	if (a ==2 || a == 3)
		return 1;
	int sum = 1;
	int c = sqrt(a);
	for (int i = b; i <= c; i++)
	{
		if (a % i == 0)
		{
			sum = sum + fengjie(a / i, i);
		}
	}
	return sum;
}
int main()
{
	int n, a;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		cout << fengjie(a, 2) << endl;
	}
	return 0;
}
		
		
