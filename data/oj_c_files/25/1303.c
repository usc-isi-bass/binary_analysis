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

//*********************************
//* ??? 2?N??               *
//* ??? ??                   *
//* ??? 2013.11.15             *
//*********************************

int main()
{
	int N;
	int a[50] = {0}, len = 1;
	a[0] = 1;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < len; j++)
		{
			a[j] *= 2;
		}

		for (int m = 0; m < len; m++)
		{
			if (a[m] > 9)
			{
				a[m] -= 10;
				a[m+1] += 1;
				if (m == len - 1) len++; 
			}
		}
	}

	for (int k = len - 1; k >= 0; k--) cout << a[k];
	return 0;
}


			

	

	

