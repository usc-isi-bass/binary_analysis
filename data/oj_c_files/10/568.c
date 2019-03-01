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


void make(int a[], int n);

int main()
{
	int n = 0;
	int hight[26];
	int i = 0;

	cin >> n;
	for (i = 1; i <= n ; i++)
		cin >> hight[i];

	make(hight, n);

	return 0;
}

void make(int hight[], int n)
{
	int i = 0;
	int j = 0;
	int a[26];
	int max = 0;
	a[1] = 1;
	for (i = 2; i <= n; i++)
	{
		a[i] = 1;
		for (j = 1; j < i; j++)
			if ((hight[j] >= hight[i]) && (a[j] + 1 > a[i]))
				a[i] = a[j] + 1;
	}
	for (i = 1; i <= n; i++)
		max = (max > a[i] ? max : a[i]);
	cout << max;
}
