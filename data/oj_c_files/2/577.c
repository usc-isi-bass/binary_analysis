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
	char mname[999][26], name;
	int i, j, m, len, max = 0;
	int num[999], count[26] = {0};
	cin >> m;
	for (i = 0; i < m; i++)
	{
		cin >> num[i] >> mname[i];
		len = strlen(mname[i]);
		for (j = 0; j < len; j++)
		{
			count[mname[i][j] - 'A']++;
		}
	}
	for (i = 0; i < 26; i++)
	{
		if (count[i] > max)
		{
			max = count[i];
			name = i + 'A';
		}
	}
	cout << name << endl << max << endl;
	for (i = 0; i < m; i++)
	{
		len = strlen(mname[i]);
		for (j = 0; j < len; j++)
		{
			if (mname[i][j] == name)
			{
				cout << num[i] << endl;
				break;
			}
		}
	}
	return 0;
}
