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
//*???????   **
//*?????? 1300012934 **
//*???2013.11.6  **
//********************************


int main()
{  
	int a[5][5], b[2][5] = {{INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN},{INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX}};
	int k = 0;
	
	for (int i = 0; i <= 4; i++)
	{
		for (int j = 0; j <= 4; j++)
		{
			cin >> a[i][j];
			if (a[i][j] >= b[0][i])
				b[0][i] = a[i][j];
			if (a[i][j] <= b[1][j])
				b[1][j] = a[i][j];
		}
	}
	for (int i = 0; i <= 4; i++)
	{
		for (int j = 0; j <= 4; j++)
		{
			if (a[i][j] == b[0][i] && a[i][j] == b[1][j])
			{
				cout << i + 1 << " " << j + 1 << " " << a[i][j];
				k = 1;
			}
		}
	}
	if (k == 0)
		cout << "not found";


	return 0;

}
