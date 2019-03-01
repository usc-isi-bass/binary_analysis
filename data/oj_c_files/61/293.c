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
	int a[21] = {0}, n, i, m;
	cin >> n;
	a[1] = 1;
	a[2] = 1;
	while(n--)
	{
		cin >> m;
		if(m == 1 || m == 2)
			cout << 1 << endl;
		else
		{
			for(i = 3; i <= m; i++)
				a[i] = a[i - 1] + a[i - 2];
			cout << a[m] << endl;
		}
	}
	return 0;
}