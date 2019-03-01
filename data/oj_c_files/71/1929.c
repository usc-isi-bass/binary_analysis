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
	int n, year, mon1, mon2, sum, c, d;
	int Lyear[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int Oyear[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		cin >> year >> mon1 >> mon2;
		c = (mon1 > mon2 ? mon2 : mon1);
		d = (mon1 > mon2 ? mon1 : mon2);
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			for (int j = c; j < d; j++)
			{
				sum = sum + Lyear[j - 1];
			}
		}
		else
		{
			for (int k = c; k < d; k++)
			{
				sum = sum + Oyear[k - 1];
			}
		}
		
		if (sum % 7 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;

}