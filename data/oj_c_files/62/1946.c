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
	char a[100] = {'\0'};
	char *p;
	cin.get(a, 100, '\n');
	p = a;
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == ' ')
		{
			while (a[i + 1] == ' ')
			{
				for (int l = i + 1; a[l] != '\0'; l++)
					*(p + l) = *(p + l + 1);
			}
		}
	}
	cout << a;
	return 0;
}

