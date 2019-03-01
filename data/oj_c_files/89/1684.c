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
	int c[10000], n, a, b, answer = 20000;
	memset(c, 0, 100);
	cin >> n;
	while (cin >> a >> b && (a + b!=0))
	{
		c[a] = 1;
	}
	for (int i = 0; i < n; i ++)
	{
		if(c[i] == 0)
		{
			answer = i;
		}
	}
	if (answer != 20000)
	{
		cout << answer << endl;
	}
	else
	{
		cout << "NOT FOUND" << endl;
	}
	return 0;
}

