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
	int z, q, s, l, m, i;
	char a[6];

	for (z = 1; z <= 5; z++)
	{
		for (q = 1; q <= 5; q++)
		{
			if(z == q)
				continue;
			for (s = 1; s <=5; s++)
			{
				if(s == q)
					continue;
				for (l = 1; l <= 5; l++)
				{
					if (l == s)
						continue;
					if ( z + q == s + l && z + l > s + q && z + s < q)
					{a[z] = 'z';a[q] = 'q';a[s] = 's';a[l] = 'l';m = 15 - z -q - s - l;}
				}
			}
		}
	}
	for(i = 5; i > m;i--)
	{
		cout << a[i] << " " << i * 10 << endl;
	}
	for (i = m - 1;i >= 1;i--)
	{
		cout << a[i] << " " << i * 10 << endl;
	}
	cin >> i;
	return 0;
}

