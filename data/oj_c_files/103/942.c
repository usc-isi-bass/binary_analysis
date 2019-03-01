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
	char str[100];
	cin >> str;
	char *p;
	p = str;
	char ch;
	ch = *p;
	int count = 0;
	while (*p != '\0')
	{
		if (ch > 90)
			ch = ch - 32;
		if (*p == ch || *p == ch + 32)
		{
			count++;
			p++;
		}
		else
		{
			cout << "(" << ch << "," << count << ")";
			ch = *p;
			count = 0;
		}
	}
	cout << "(" << ch << "," << count << ")";
	cout << endl;
	return 0;
}