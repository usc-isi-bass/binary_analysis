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
	char a[1010];
	int len = 1;
	cin >> a;
	if(strlen(a) == 1)
	{
		if (a[0] >= 65 && a[0] <= 90)
		{
			cout << "(" << a[0] << ",1)";
		}
		else
		{
			cout << "(" << (char)(a[0] - 32) << ",1)";
		}
	}
	for(int i = 1; a[i] != '\0'; i++)
	{
		if (a[i] == a[i - 1] || a[i] == a[i - 1] + 32 || a[i] == a[i - 1] - 32)
		{
			len++;
		}
		else
		{
			if (a[i - 1] >= 65 && a[i - 1] <= 90)
			{
				cout << "(" << a[i - 1] << "," << len << ")";
			}
			else
			{
				cout << "(" << (char)(a[i - 1] - 32) << "," << len << ")";
			}
			len = 1;
		}
		if (i == strlen(a) - 1)
		{
			if (a[i] >= 65 && a[i] <= 90)
			{
				cout << "(" << a[i] << "," << len << ")";
			}
			else
			{
				cout << "(" << (char)(a[i] - 32) << "," << len << ")";
			}
		}
	}
	cout << endl;
	return 0;
}