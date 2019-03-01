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

main ()
{
	char a[500];
	int i, j, k, s, l, flag;
	cin >> a;
	l = strlen(a);
	for(i = 2; i <= l; i++)
	{
		for (j = 0; j <= l - i; j++)
		{
			flag = 1;
			for (k = 0; k < i / 2; k++)
			{
				if (a[j + k] != a[j + i - k - 1])
				{
					flag = 0;
					break;
				}
			}
			if(flag)
			{
				for (s = 0; s < i; s++)
					cout << a[j + s];
				cout << endl;
			}
		}
	}
	return 0;
}