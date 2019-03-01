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

// ?????.cpp : ??????????????
//

 
int sum(int m,int n)
{
	if (n == 1 || m == 0)
	{
		return 1;
	}
	if (n != 1)
	{
		if (m - n < 0)
		{
			return sum(m, m);
		}
		return (sum(m,n - 1) + sum(m - n,n));
	}
}

int main()
{
	int t,i,m,n;
	cin >> t;
	for (i=1;i<=t;i++)
	{
		cin >> m >> n;
		cout << sum(m,n) << endl;
	}
	return 0;
}
