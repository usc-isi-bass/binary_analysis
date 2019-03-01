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
	int i;
	char a[101];
	cin.getline(a, 101);
	char *p = a;
	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] == ' ' && a[i + 1] == ' ')
			p++;
		else
		{
			cout << *p;
			p++;
		}
	}
	cin >> i;
	return 0;
}