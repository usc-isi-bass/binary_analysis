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

//********************************************************
//*  ???:1.cpp                                        *
//*  ??????    1200012948                          *
//*  ????: 2012 11 05                                *
//*  ????:???????                             *
//********************************************************
//??
int main()
{
	int i, j, m, n = 0, a[5][5] = {{0},{0}};
	//?????
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cin >> a[i][j];
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			m = a[i][j];
			//????
			if (m >= a[i][0] && m >= a[i][1] && m >= a[i][2] && m >= a[i][3] && m >= a[i][4] && m <= a[0][j] && m <= a[1][j] && m <= a[2][j] && m <= a[3][j] && m <= a[4][j])
			{
				cout << i + 1 << " " << j + 1 << " " << m << endl;     //??+1
				n++;

			}
		}
	}
	if (n == 0)
		cout << "not found" << endl;
	//??
	return 0;
}
