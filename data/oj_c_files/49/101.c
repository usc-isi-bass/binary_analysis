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
	char str[502];
	cin >> str;
	int i,j,len1,len2;
	len1 = strlen(str);
	for(len2 = 2; len2 < len1; len2++)
	{
		for(i = 0; i < len1; i++)
		{
			for(j = i; j < i + len2; j++)
			{
				if(str[j] != str[2 * i + len2 - 1 - j])
					break;
			}
			if(j == i + len2)
			{
				for(j = i; j < i + len2; j++)
					cout << str[j];
				cout << endl;
			}
		}
	}
	return 0;
}