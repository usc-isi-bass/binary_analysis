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
	int t, i, j;
	cin >> t;
	cin.get();
	while (t--)
	{
		int flag = 0;
		char s[10000] = {0};
		cin.getline(s, 10000);
		for (i = 0; i < strlen(s); i++)
		{
			if (i == strlen(s) - 1 && s[i] != '0') {cout << s[i] << endl; flag = 2; break;}
			if (s[i] != '0')
			{
				for (j = i + 1; j < strlen(s); j++)
				{
					if (s[j] == s[i])
					{
						s[j] = '0';
						flag = 1;
					}
				}
				if (flag) s[i] = '0';
				else {cout << s[i] << endl; flag = 2; break;}
				flag = 0;
			}
		}
		if (flag != 2) cout << "no" << endl;
	}

	return 0;
}
