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

//***************************
//**???4.cpp
//**??????
//**???2013.11.1
//**?????????
//***************************
int main()
{
	int a[6][6];
	int n = 0, c1, c2;

	for (int i = 1; i <= 5; i++)
		for (int j = 1; j <= 5; j++)
			cin >> a[i][j];
	for (int i = 1; i <= 5; i++)
		for (int j = 1; j <= 5; j++)
		{
			c1 = 0;
			c2 = 0;
			for (int k = 1; k <= 5; k++)
			{
				if (a[i][j] >= a[i][k])
					c1++; // ?c1????????????????????
				if (a[i][j] <= a[k][j])
					c2++; // ?c2????????????????????
			}
			if (c1 == 5 && c2 == 5) // ??????
			{
				cout << i << " " << j << " " << a[i][j];
				n++; // ????
			}				
		}
	if (!n) // ????0?????
		cout << "not found" << endl;
	return 0;	
}