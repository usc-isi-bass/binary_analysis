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
	char a[100], *p = a, *q;
	cin.getline(a, 100);
	while (*p != '\0')
	{
		q = p; 
		if (*p == ' ' && *(p + 1) == ' ')
		{
			for (; *p != '\0'; p++)
				*p = *(p + 1);
			p = q;
		}
		else
			p++;
	}
	cout << a << endl;
	return 0;
}