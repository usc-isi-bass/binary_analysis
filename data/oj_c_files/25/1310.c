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

// * * * * * * * * * * * * * * *
// *?????2?N??         *
// *??????  1300013011   *
// *???2013.11.17           *
// * * * * * * * * * * * * * * *
int main()
{
	int n, num[1000] = {0}, i, j, len;
	cin >> n;
	num[0] = 1;   // ??????????1????0
	
	for (i = 1; i <= n; i++)
	{
		for (j = 999; j >= 0; j--)
		{
			if (num[j] != 0)
			{
				len = j;   // ????0???????
				break;
			}
		}
		
		for (j = 0; j <= len; j++)
			num[j] *= 2;             // ??????0???????2
		for (j = 0; j <= len; j++)
		{
			if (num[j] >= 10)       // ?????????9????????
			{
				num[j + 1] += num[j] / 10;
				num[j] = num[j] % 10;
			}
		}
	}
	for (j = 999; j >= 0; j--)  // ??????????0??
	{
		if (num[j] != 0)
		{
			len = j;
			break;
		}
	}
	for (i = len; i >= 0; i--)   // ??????0????????
		cout << num[i];
	cout << endl;
	return 0;
}