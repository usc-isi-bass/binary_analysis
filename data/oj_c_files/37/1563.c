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
	char str[100001];
	int i, j, t, k, flag;
	cin >> t;
	for (k = 1; k <= t; k++)
	{
		cin >> str;
		int l = strlen(str);
		for (i = 0; i < l; i++)
		{
			flag = 0;
			for (j = 0; j < l; j++)
			{
				if (j != i)
				{if (str[j] == str[i])
					{
						flag = 1;
					}
			}}
			if (flag == 0)
			{
				cout << str[i] << endl;
				break;
			}
		}
		if (flag == 1)	cout << "no" << endl;
	}

return 0;
}