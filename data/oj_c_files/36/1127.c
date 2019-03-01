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
	char str1[100], str2[100];
	int sum = 0, len1, len2, i, j;
	cin >> str1 >> str2;
	len1 = strlen(str1);
	len2 = strlen(str2);
	if (len1 != len2)
	{
		cout << "NO" << endl;
		return 0;
	}
	else
	{
		for (i = 0; i < len1; i++)
		{
			for (j = 0; j < len1; j++)
			{
				if (str2[j] == str1[i])
				{
					str2[j] = 0;
					sum++;
					break;
				}
			}
		}
		if (sum == len1)
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
	return 0;
}
