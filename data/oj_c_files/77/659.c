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
	char a[100];
	int i, j, m;
	cin.getline(a,100);
	m = strlen(a);
	for ( i = 1; i < m; i++)
	{
		if (a[i] == a[m - 1])
		{
			for (j = i - 1; ; j--)
			{
				if (a[j] == a[0])
				{
					cout << j << " " << i << endl;
					a[i] = 's';
					a[j] = 's';
					break;
				}
			}
		}
	}
	return 0;
}