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
	char a[10000];
	int t, i, j, b[26], p = 0, k;
	cin >> t;
	cin.get();
	for (i = 1; i <= t; i++)
	{
		for (k = 0; k < 26; k++)
			b[k] = 0;
		cin.getline(a, 100000);
		for (j = 0; a[j] != '\0'; j++)
			b[a[j] - 'a']++;
		for (j = 0; a[j] != '\0'; j++)
		{
			if (b[a[j] - 'a'] == 1)
			{
				p++;
				cout << a[j] << endl;
				break;
			}
		}
		if (p == 1)
		{
			p = 0;
			continue;
		}
		if (p == 0)
			cout << "no" << endl;
	}
	return 0;
}
	