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

/*-----------------------------------------*\
|? ? ?   ???2?N??           	    |
|? ?      ????	                    |
|? ? ? ??2010 ? 12 ? 15 ?		    |
|? ?      ?1000012758		            |
\*-----------------------------------------*/
int main()
{
	int n, a[100] = {1}, Len = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = Len; j >= 0; j--)
		{
			a[j] *= 2;
			if (a[j] >= 10)
			{
				a[j + 1] += a[j] / 10;
				a[j] %= 10;
				if (j + 1 > Len)
					Len = j + 1;
			}
		}
	for (int i = Len; i >= 0; i--)
		cout << a[i];
	return 0;
}