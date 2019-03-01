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

//********************************
//*???????????   **
//*????? 1200012845 **
//*???2012.10.22  **
//********************************
int main()
{
	int m, a, b, i, j;  //j?a????i?b???
	cin >> m;
	for (a = 3; a <= (m / 2); a = a + 2)
	{
		
		int a1 = (int) sqrt(a);
		for (j = 2; j <= a1; j++)
		{
			if (a % j == 0) break;  //?a??j??????????????
		}
		if (j == (a1 + 1))                 //?j=a1+1?a???j???????a???
		{
			for (b = a; b <= m; b = b + 2)
			{			
				int b1 = (int) sqrt(b);
				for (i = 2; i <= b1; i++)
				{
					if (b % i == 0) break;  //?b??i??????????????
				}
				if ((i == (b1 + 1)) && (a + b == m))    //?i=b1+1?b???i???????b???            
				{
					cout << a << " " << b << endl;
				}
			}
		}
	}
	return 0;
}
