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

int a[100] = {0};
int f(int num)
{
	if (a[num] == 0)
		return (f(num - 1) + f (num - 2));
	else
		return a[num];
}
int main()
{
	a[1] = 1;
    a[2] = 1;
	int num, n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> num;
	    cout << f(num) << endl;
	}
	return 0;
}