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
	int n;
	cin >> n;
	cin.get();
	for (int i = 1; i <= n; i++)
	{
		char str[85];
		int l, t;
		cin.getline(str, 85);
		l = strlen(str);
		if ((str[0] == '_') || (str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z'))
		{
			for (t = 1; str[t] != '\0'; t++)
			{
				if (!((str[t] == '_') || (str[t] >= 'a' && str[t] <= 'z') || (str[t] >= 'A' && str[t] <= 'Z') || (str[t] >= '0' && str[t] <= '9')))
				{
					cout << "0" << endl;
					break;
				}
			}
			if (t == l)
				cout << "1" << endl;
		}
		else
				cout << "0" << endl;
	}
	return 0;
}