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

void change(char *a)
{
	char *p = a;
	while(*p != '\0')
	{
		if(*p >= 'a' && *p <= 'z')
			*p += 'A' - 'a';
		p++;
	}
	return;
}
int main()
{
	char str[1001];
	cin >> str;
	int count = 1;
	change(str);
	char *p = str;
	while(*p != '\0')
	{
		if(*p == *(p+1))
		{
			count++;
		}
		else
		{
			printf("(%c,%d)",*p,count);
			count = 1;
		}
		p++;
	}
	return 0;
}