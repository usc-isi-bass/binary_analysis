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

//******************
// 7.3.cpp
// ??   1200018415
// 2012 11 6
//*****************


int main()
{
	int x, i, j, k, s = 0;
	int m, n, a[100][100];
	cin >> x;
	for (i =1; i <= x; i++)                         // ??????x?
	{
		cin >> m >> n;                              // ?????
		for (j = 0; j <= m - 1; j++)                // ???
		{
			for (k = 0; k <= n - 1; k++)            // ???
			{
				cin >> a[j][k];                     //
				if (j == 0 || j == m - 1 ||( k == 0 && j !=0 && j !=m - 1)
					|| (k == n - 1 && j != 0 && j != m - 1))                     // ?????
					s = s + a[j][k];                               // ????? 
			}
		}
		cout << s << endl;                              // ????   
		s = 0;                                          // s??0
	}

	return 0;
}

