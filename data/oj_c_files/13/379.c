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

int main()
{
	int N, c, b = 1;
	cin >> N;
	int a[20001];
	for (int i = 1; i <= N; i ++)
		cin >> a[i];
	for (int m = 2; m <= N; m ++)
	{
		for (c = 1;c <= b; c ++)
		{
			if (a[m] == a[c]) break;
		}
		if (c == b + 1)
		{
			b ++;
			a[b] = a[m];
		}		
	}
	cout << a[1];
	for (int d = 2; d <= b; d ++)
		cout << " " << a[d];
	return 0;
}