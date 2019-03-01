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
	char a[501];
	int i, num = 0, j, z, m;
	cin >> a;
	for (i = 0; a[i] != '\0'; i++)
		num++;
	for (i = 2; i <= num; i++)
	{
		for (j = 0; j <= num - i + 1; j++)
		{
			if (i % 2 == 0)
			{
				for (z = j; z <= j + i / 2 - 1; z++)
				{
					m = j + i - 1 - z + j;
					if (a[z] != a[m])
						break;
				}
				if (z == j + i / 2)
				{
					for (z = j; z <= j + i - 1; z++)
						cout << a[z];
					cout << endl;			
				}
			}
			if (i % 2 == 1)
			{
				for (z = j; z <= j + (i - 1)/ 2 - 1; z++)
				{
					m = j + i - 1 - z + j;
					if (a[z] != a[m])
						break;
				}
				if (z == j + (i - 1)/ 2)
				{
					for (z = j; z <= j + i - 1; z++)
						cout << a[z];
					cout << endl;
				}
			}
		}
	}
	return 0;
}

