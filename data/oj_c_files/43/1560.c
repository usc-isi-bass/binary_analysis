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
	int m, n, c;
	cin >> m;
	for (int i = 3; i <= m / 2; i++)
	{
		c = 1;
                  for (int j = 2; j <= i; j++)
		{
			if (i % j == 0 && j != i)
			{   
				c = 0;
				break;
			}
			if (j == i)
			    break;
		}
		if (c)
		{
			n = m - i;
      
			for (int k = 2; k <= n; k++)
			{
			    if (n % k == 0 && n != k)
	                break;
	            if (n == k)
				{
				    cout << i << " " << n << "\n";
				}
			}
        }
	}
	return 0;
}