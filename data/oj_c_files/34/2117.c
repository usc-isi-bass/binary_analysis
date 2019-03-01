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

//****************************************
//*???????                       **
//*????? 1100012762                **
//*???2011.11.15                     **
//****************************************
int f(int n)                                            //????????????????????1????????????
{
	if (n == 1)
	{
		cout << "End" << endl;
		return 0;
	}
	else
	{
		if (n % 2 == 0)
		{
			cout << n << "/2=" << n / 2 << endl;
			n /= 2;
		}
		else
		{
			cout << n << "*3+1=" << n * 3 + 1 << endl;
			n = n * 3 + 1;
		}
		return f(n);
	}
}
int main()
{
	int n;
	cin >> n;
	f(n);
	return 0;
}