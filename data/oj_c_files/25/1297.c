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

//****************************
//**Title:??2?N??      **
//**Author:?? 1300012732  **
//**Date?2013.11.16        **
//**File?5.cpp             **
//****************************

int main()
{
	int n, i, j;
	cin >> n;
	int a[32] = {1};
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 32; j++)
			a[j] *= 2;
		for (j = 0; j < 32; j++)
		{
			if (a[j] >= 10)
			{
				a[j]-=10;
				a[j+1]++;
			}
		}
	}
	for (i = 31; i >= 0; i--)
	{
		if (a[i] != 0)
			break;
	}
	for (j = i; j >= 0; j--)
		cout << a[j];
	cout<<endl;
	return 0;
}