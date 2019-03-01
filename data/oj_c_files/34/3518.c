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


int CalcAndPrint(int x)
{
	int result;
	if (x % 2 == 0)
	{
		result = x / 2;
		cout << x << "/2=" << result << endl;
	}
	else
	{
		result = x * 3 + 1;
		cout << x << "*3+1=" << result << endl;
	}
	return result;
}

int main()
{
	int num;
	for (cin >> num; num != 1; num = CalcAndPrint(num));
	cout << "End";
	return 0;
}