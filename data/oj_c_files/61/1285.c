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

int shulie(int);
int num[100] = {0};

int main()
{
	int a, n, k;
	cin >> n;
	for (k = 0; k < n; k++)
	{
		cin >> a;
		cout << shulie(a) << endl;
	}
	return 0;
}
int shulie(int a)
{
	if (a == 1 || a == 2)
		return 1;
	num[a] = shulie(a -1) + shulie(a - 2);
	return num[a];
}
