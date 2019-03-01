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



int compare(const void *a, const void *b)
{
	return *(int*)a - *(int *)b;
}

int main()
{
	int n, a[100], b;
	a[0] = 1, a[1] =1;
	cin >> n;
	for (int i = 2; i <= 30; i ++)
	{
		a[i] = a[i-1] + a[i-2];
	}
	for (int i = 0; i < n; i ++)
	{
		cin >> b;
		cout << a[b-1] << endl;
	}
	return 0;
}