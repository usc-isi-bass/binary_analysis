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

//*********************
//* ??? ??13     *
//* ??? 1200012878 *
//* 11?16?          *
//*********************
int main()
{
	char a[101];
	int num[101], b[101];
	int len, flag = 0, r, i;
	cin >> a;
	len = strlen(a);
	for (i = 0; i <= len - 1; i++)
		num[i] = a[i] - '0';
	r = 0;
	for (i = 0; i <= len - 1; i++)
	{
		b[i] = (r * 10 + num[i]) / 13;
		r = (r * 10 + num[i]) % 13;
	}
	for (i = 0; i <= len - 1; i++)
	{
		if (b[i] != 0 || flag == 1)
		{
			cout << b[i];
			flag = 1;
		}
	}
	if (flag == 0)
		cout << "0";
	cout << endl;
	cout << r << endl;
	return 0;
}

