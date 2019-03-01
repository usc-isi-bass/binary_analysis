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
	int i, k;
	char route[1001];
	cin.getline(route, 1001);
	int len = strlen(route);
	for (i = 0; i < len; i++)
	{
		int count = 1;
		if (i == len - 1)
		{
			if ((route[i] >= 97) && (route[i] <= 122))
			{
				route[i] = route[i] - 32;
			}
			cout << '(' << route[i] << ',' << count << ')';
			break;
		}
		// i <= len - 2,?i???????
		for (k = i + 1; k < len; k++)
		{
			if ((route[k] == route[i]) || (route[k] == route[i] + 32) || (route[i] == route[k] - 32))
			{
				count++;
			}
			else
			{
				break;
			}
		}
		// ???????????break??route[k] ?route[i]???????????k == len;
		if ((route[i] >= 97) && (route[i] <= 122))
		{
			route[i] = route[i] - 32;
		}
		cout << '(' << route[i] << ',' << count << ')';
		if (k != len - 1)   // ????k??????
		{
			i = k - 1;
		}
	}
	return 0;
}
