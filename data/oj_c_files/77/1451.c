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
	int i, j, l;
	char a[101];
	cin >> a;
	l = strlen(a);
	for (i = 0; i < l; i++)
	{
		if (a[i] == a[l - 1])
		{
			for (j = i - 1; j >= 0; j--)
			{
				if (a[j] == a[0])
				{
					cout << j << " " << i << endl;
					a[j] = a[l - 1];
					break;
				}
			}
		}
	}

return 0;
}