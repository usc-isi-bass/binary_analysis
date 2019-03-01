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
//*?????????   **
//*?????? 1300012861 **
//*???2013.10.17  **
//********************************
int main()
{
	int n, x, y, i, r, j, s; 
	cin >> n; 
	for (x = 3; x <= n / 2; x += 2) //??? ???3?? ??+2
	{
		y = n - x; 
		r = sqrt (x);
		s = sqrt (y);
		for (i = 2; i <= r; i++) //??x?????
		{
			if (x % i == 0) //????????
			{
				break; 
			}
		}
		for (j = 2; j <= s; j++) //??y?????
		{
			if (y % j == 0)
			{
				break; 
			}
		}
		if ((i == r + 1) && (j == s + 1)) //?x?y??????????? ?????
			cout << x << ' ' << y << endl; 
	}
	return 0;
}

