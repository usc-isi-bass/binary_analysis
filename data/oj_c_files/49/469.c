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

//*******************************************************
//*11.11??  ????                                  *
//*?????  ?? 1100012844                          *
//*???2011?11?11?                                 *
//*******************************************************
void huiwen(char a[]) // ???huiwei??
{
	int i, j, n, sum; // n????????
	for (n = 2; n <= strlen(a); n++) // n???2
	{

		// j????n????????????
		for (j = 0; j <= strlen(a) - n; j++)
		{
			sum = n + 2 * j - 1; // ??????????
			for (i = j; i <= j + n / 2; i++) // ???????
			{
				if (a[i] != a[sum - i]) // ??????
					break;
			}

			// ???????????????n???????
			if (i == j + n / 2 + 1)
			{

				// ?????????
				for (i = j; i <= n + j - 1; i++)
					cout << a[i];
				cout << endl;
			}
		}
	}
}
int main()
{
	char str[501];
	cin >> str;
	huiwen(str); // ????
	return 0;
}