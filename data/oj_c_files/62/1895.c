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
	char origin[100];
	char transfer[100];
	cin.getline(origin, 101);
	char *p = origin;
	char *q = transfer;
	int n = 0;
	for (int i = 0; i < strlen(origin); i++)
	{
		if (*p == ' '&& *(p-1) == ' ')
			p++;
		else
		{
			*q = *p;
			n++;
			q++;
			p++;
		}
	}
	q = transfer;
	for (int i = 1; i <= n; i++)
	{
		cout << *q;
		q++;
	}
	cout << endl;
	return 0;
}