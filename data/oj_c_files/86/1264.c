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
	int n, j, m, i, a[200], t[200] = {0};
	cin >> n;
	for (j = 0; j < n; j++)
	{
		cin >> m;
		memset (t, 0, sizeof(t));
		if (m == 0)
			cout << 60 << endl;
		for (i = 0; i < m; i++)
		{
			cin >> a[i];
			t[i] = a[i] + (i + 1) * 3 + 1;
		}
		for (i = 0; i < m; i++)
		{
			if ((t[i] <= 60 && t[i + 1] > 60) || (t[i] <= 60 && t[i + 1] == 0))
			{
				if (t[i + 1] == 61 || t[i + 1] == 62 || t[i + 1] == 63)
				{
					cout << a[i + 1] << endl;
					break;
				}
				else
					cout << 60 - 3 * (i + 1) << endl;
			}
		}
	}
	return 0;
} //?????
