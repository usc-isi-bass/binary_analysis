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
	int i = 0;
	char a[102];
	gets (a);
	while (a[i] != '\0')
	{
		if (a[i] == ' ')
		{
			if (a[i-1] != ' ')
				cout << a[i];
		}
		else
			cout << a[i];
		i++;
	}
	return 0;
}