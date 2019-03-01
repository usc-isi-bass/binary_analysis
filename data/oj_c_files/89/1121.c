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
	struct person
	{
		int j;
		int count;
	} p[10000];
	int n, k = 1, i;
	cin >> n;
	for (i = 0; i < n; i++)
		p[i].count = 0;
	while(1)
	{
		cin >> i;
		cin >> p[i].j;
		if (i == 0 && p[i].j == 0)
			break;
		p[p[i].j].count++;
	}
	for (i = 0; i < n; i++)
	{
		if (p[i].count == n - 1)
		{
			cout << i;
			k = 0;
		}
	}
	if (k)
		cout << "NOT FOUND";
	return 0;
}