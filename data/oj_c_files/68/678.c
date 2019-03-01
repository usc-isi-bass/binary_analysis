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
	int n , i , ii , j ,jj , q , k , kk; 
	cin >> n;
	for(i = 6;i <= n; i += 2)
	{
		ii = i / 2; 
		for(j = 3;j <= ii;j++)
		{
			jj = sqrt((float)j);
			for (q = 2;q <= (int)jj;q++)
				if (j % q == 0) break;
			if (q == (jj+1))
			{
				k = i - j;
				kk = sqrt((float)k);
				for (q = 2;q <= (int)kk;q++)
					if (k % q == 0) break;
				if (q == (kk+1))
				{
					cout << i << "=" << j << "+" << k << endl;
					break;
				}
			}
		}
	}

	return 0;
	
}