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


char a[500];

void checkTheSame(char t[], int n)
{
	int len, i, j, k, p;
	len = strlen(t);
	for (i = 0; i < len - n; i++)
	{
		j = i + n;
		k = i;
		while (j > k)
		{
			if (a[k] != a[j])
				break;
			k++;
			j--;
		}
		if (j <= k)
		{
			for (p = i; p <= i + n; p++)
				cout << t[p];
			cout << endl;
		}
	}
}

int main()
{
	int n = 1, len;
	cin.getline(a, 500);
	len = strlen(a);
	for (n = 1; n < len; n++)
		checkTheSame(a, n);
	return 0;
}