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
	int t, i, j, k, flag, count[26];
	char a[100000];
	cin >> t;
	cin.ignore();
	for (i = 1; i <= t; i++)
	{
		for (k = 0; k < 26; k++)
			count[k] = 0;
		flag = 0;
		for (j = 0; ; j++)
		{
			cin.get(a[j]);
			if (a[j] == '\n')
				break;
			count[a[j] - 97]++;
		}
		for (k = 0; k < j ; k++)
		{
			if (count[a[k] - 97] == 1)
			{
				cout << a[k] << endl;
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			cout << "no" << endl;
	}
	return 0;
}
