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


int main ()
{
	char str[1000];
	cin >> str;
	int i, len, count = 1;
	len = strlen(str);
	for (i = 0; i < len; i++ )
	{
		if (str[i] - 'a' >= 0 && str[i] - 'z' <= 0)
		{
			str[i] = str[i] - 32;
		}
	}
	if (len == 1)
	{
		cout << "(" << str[0] << "," << count << ")" ;
	}
	else
	{
		for (i = 0; i < len - 1; i++ )
		{
			count = 1;
			while (str[i] == str[i + 1])
			{
				count++ ;
				i++ ;
			}
			cout << "(" << str[i] << "," << count << ")" ;
		}
		if (count == 1)
		{
			cout << "(" << str[i] << "," << count << ")";
		}
	}
	cout << endl;

	return 0;
}