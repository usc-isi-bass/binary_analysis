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

int ji(int);
int ou(int);
int main()
{
	int	 n;
	cin >> n;
	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n = ou(n);
		}
		else
		{
			n = ji(n);
		}


	}
	cout << "End" << endl; 
return 0;
}
int	ou(int n)
{
	int k = n / 2;
	cout << n << "/2=" << k << endl;
	return k;
}
int	ji(int n)
{
	int k = n * 3 + 1;
	cout << n << "*3+1=" << k << endl;
	return k;
}
