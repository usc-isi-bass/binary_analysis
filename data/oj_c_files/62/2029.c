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
	int u, v, l, num = 0;
	char str[100], *p = NULL, *r = NULL;
	cin.getline(str, 100);
	p = str;
	r = str;
	l = strlen(str);
	for (u = 0; u <= l - 1; u++)
	{
		if(*(p + u) != ' ')
		{
			*(p  + u - num) = *(p + u);
		}
		else
		{
			*(p + u - num) = ' ';
			for (v = u + 1; *(p + v) == ' '; v++)
			{
				num++;
			}
			u = v - 1;
		}
	}
	u = 0;
	for (u = 0; u <= l - 1 - num; u++)
	{
		cout << *(p + u);
	}
	cout << endl;
	return 0;
}