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
	char str[100], t;
	char *p = str, *q = NULL;
	int count = 0;
	gets(str);
	for (p = str; *p != '\0'; p++)
	{
		if (*(p - 1) == ' ' && *p == ' ')
		{
			for (q = p; ; q++)
			{
				t = *q;
				*q = *(q + 1);
				*(q + 1) = t;
				if (*q == '\0')
				{
					break;
				}
			}
			if (*p == ' ')
			{
				p--;
			}
		}
	}
	cout << str << endl;
	return 0;
}