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
	int a[1000], i = 0, b[1000] = {0}, j = 0, k, l;
	char ch = ',';
	while (ch == ',')
	{
		cin >> a[i++];
		ch = cin.get();
	}
	cout << i << ' ';
	while (j < i)
	{
		cin >> k;
		ch = cin.get();
		for (l = a[j]; l < k; l++)
			b[l]++;
		j++;
	}
	k = 0;
	for (i = 0; i < 1000; i++)
		k = (k > b[i]) ? k : b[i];
	cout << k;
	ch = cin.get();
	return 0;
}

