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
	char str1[500], str2[500];
	int i, j, length, k = 0, m = 0, n, flag = 0;
	cin >> str1;
	for(length = 2; length <= strlen(str1); length++)
	{
		for(i = 0; i <= strlen(str1) - length; i++)
		{
			for(j = i; j <= i + length - 1; j++)
			{
				str2[k++] = str1[j];
			}
			k = 0;
			for(m = 0; m <= length - 1; m++)
			{
				if(str2[m] != str2[length - 1 - m])
				{
					flag = 1;
					break;
				}
			}
			if(flag == 0)
			{
				for(n = 0; n <= length - 1; n++)
					cout << str2[n];
				cout << endl;
			}
			flag = 0;
		}
	}
	return 0;
}




