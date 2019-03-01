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

/*????????????
**?  ????
**?  ??2010?10?29?
*/
int main()
{
	int n, i, j, k, m, count = 0, a[100001];
	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> a[i];//????n??
	cin >> k;
	for (i = 1; i <= n - count; i++)
	{
		if (a[i] == k)
		{
			count++;//?a[i]????,???+1
			for (j = i+1; j <= n; j++)//??a[i]?????????
			{	
				if (a[j] == k)
				{
					count++;//???????,??+1
				}
				else 
				{
					for (m = i; m <= n - (j - i); m++)
					{
						a[m] = a[m + j - i];//?????????????,??????
					}
					break;//???a[j]???
				}
			}
		}
	}
	for (i = 1; i <= n - count; i++)
	{
		if (i < n - count) cout << a[i] << " ";//????????
		if (i == n - count) cout << a[i] << endl;//????????
	}
	return 0;
}