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
	char s[501];
	int i, j, t;
	cin.getline(s,501);
	int l = strlen(s);
	for (i = 2;i <= l ;i++)
	{
		for (j = 0;j <= l - i;j++)
		{
			for (t = j;t <= j + i / 2 - 1 ;t++)
			{
				if (s[t] != s[2 * j + i - 1 - t])
					break;
			}
			if (t == j + i / 2 )
			{
				for (int k = j;k <= j + i - 1;k++)
				{
					cout << s[k];
				}
				cout << endl;
			}
		}
	}

	return 0;
}
