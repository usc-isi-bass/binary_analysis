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

//******************************************
//*???????.cpp                     **
//*??: ??     1100012808              **
//*???2011.12.17                       **
//******************************************
int main()  //???
{        //?????
	int flag[301] = {0}, i, n, j = 0, m, count, k, t;
	while (cin >> n)
	{
		memset(flag, 0, sizeof(flag));
		cin >> m;
		j = 0;
		if (m == 0 && n == 0)
			break;
		if (m == 1)
		{
			cout << n << endl;
			continue;
		}
		for (i = 1; i <= n; i++)
		{
			count = 0;
			if (flag[i] == 0)
			{
				j++;
				if (j == m)
				{
					j = 0;
					flag[i] = 1;
				}
			}
			if (i == n)
			{
				i = 0;
				for (k = 1; k <= n; k++)
					if (flag[k] == 0)
					{
						count++;
						t = k;
					}
				if (count == 1)
					break;
			}
		}
		cout << t << endl;
	}
	return 0;
} //?????
