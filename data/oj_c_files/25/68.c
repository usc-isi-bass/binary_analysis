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

//@@@@@???2?N??*********//
//@@@@@?????*******************//
//@@@@@???12/16******************//
int main()
{
	int N, i, j; // N??2?N??
	int a[100]; int result[100]; // 2?100????31?

	memset(a,0,sizeof(a)); // ??a??
    memset(result,0,sizeof(result)); // ??result??
    cin >> N;
	a[0] = 1; // ??????
	for (i = 1; i <= N; i++) // ??N??
	{
		for (j = 0; j < 100; j++) // a????????????2
		{
			result[j] = a[j] * 2;
		}
		for (j = 0; j < 100; j++)
		{
		     if (result[j] >= 10) // ????
		    {
			     result[j + 1] += result[j] / 10;
			     result[j] = result[j] % 10;
		    }
		}
		for (j = 0; j < 100; j++)
		{
			a[j] = result[j]; // ?????result?????a???????
		}
	}
	j = 99;
	while (a[j] == 0)j--; // ???????????
	for (; j >= 0; j--)
	{
		cout << a[j]; // ??
	}
	cout << endl;

		

	return 0;
}