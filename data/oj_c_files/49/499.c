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


char a[501];
int len, i = 0, t = 2, p = 0, j = 0, n = 1;

void back(char m[])
{
	len = strlen(m);
	do
	{
		for (j = 0;j <= len - t;j++)
		{
			for (i = j;i < j + t;i++)
			{
				if (m[i] == m[j+t-n])
				{
					if (i + 1 >= j + t -n)
					{
						for (i = j;i < j + t;i++)
							cout << m[i];
						cout << '\n';
						break;
					}
				}
				else
					break;
				n++;
			}
			n = 1;
		}
		t++;
	}while (t <= len);
}
int main()
{
	cin >> a;
	back(a);
	return 0;
}

