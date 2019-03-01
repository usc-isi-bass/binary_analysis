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

//***********************************************
//         1.cpp
//   ??????
//  created on 2012-10-22
//  author ?? 1200012934
//***********************************************
int main()
{
	int m, i, j, l;
	cin >> m;
	for (i = 3; i <= m /2; i++)
	{
		l = (int) sqrt (i);
		for (j = 2; j <= l; j++)
			if (i % j == 0) break;
		if (j == l + 1)
		{
			l = (int) sqrt (m - i);
			for (j = 2; j <= l; j++)
				if ((m - i) % j == 0) break;
			if (j == l +1)
				cout << i << " " << m - i << endl;
		}
	}
	return 0;
}