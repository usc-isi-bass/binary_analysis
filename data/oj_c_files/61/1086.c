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

int f(int af)
{
	if(af == 1 || af == 2)
		return 1;
	return f(af-1) + f(af-2);
}
int main()
{
	int n, m, k;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> k;
		m = f(k);
		cout << m << endl;
	}
	return 0;
}