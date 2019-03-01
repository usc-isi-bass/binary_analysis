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
	int t, alp[26] = {0}, flag = 0;
	char a[100000];
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a;
		flag = 0;
        memset (alp, 0, sizeof(alp));
		for (int j = 0; j < strlen(a); j++)
		{
			alp[a[j] - 'a']++;
		}
		for (int k = 0; k < strlen(a); k++)
		{
			if (alp[a[k] - 'a'] == 1)
			{
				cout << a[k] << endl;
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			cout << "no" << endl;
		}
	}

	return 0;
}