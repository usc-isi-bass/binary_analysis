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


int ans[21];

int work(int a)
{
	if (a <= 2)
		return 1;
	return (work(a - 1) + work(a - 2));
}

int main()
{
	int n, a;
	int i;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a;
		cout << work(a) << endl;
	}
	return 0;
}