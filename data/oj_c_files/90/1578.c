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


int Calc(int m, int n)
{
	int sum;

	// case: at least one empty
	if (n == 1) 
		return 1;
	else 
		sum = Calc(m, n - 1);

	// case: no empty
	if (m == n) 
		sum += 1;
	else if (m > n)
		sum += Calc(m - n, n);

	return sum;
}

int main()
{
	int m, n, x;
	for(cin >> x; x > 0; x--)
	{
		cin >> m >> n;;
		cout << Calc(m, n) << endl;
	}
}