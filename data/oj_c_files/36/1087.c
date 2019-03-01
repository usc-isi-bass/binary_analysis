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
	char str1[100], str2[100], temp;
	int i, j;
	cin >> str1 >> str2;
	if (strlen(str1) == strlen(str2))
	{
		for (i = 0; i < strlen(str1) - 1; i ++)
			for (j = i + 1; j < strlen(str1); j ++)
				if (str1[i] > str1[j])
				{
					temp = str1[i];
					str1[i] = str1[j];
					str1[j] = temp;
				}
		for (i = 0; i < strlen(str2) - 1; i ++)
			for (j = i + 1; j < strlen(str2); j ++)
				if (str2[i] > str2[j])
				{
					temp = str2[i];
					str2[i] = str2[j];
					str2[j] = temp;
				}
		if (strcmp(str1, str2) == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	else
		cout << "NO" << endl;
		return 0;
	}