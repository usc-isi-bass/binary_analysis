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

sb(char a[])
{
	char *p,*q;
	int n;
	n = strlen(a);
	p = a + n - 1;
    while (*p != ' '&&p != a - 1)
			p--;
	q = p + 1;
	for (;*q != '\0'&&*q != ' ';q++)
			printf("%c",*q);
	p--;
	for (;p>=a;p--)
	{
		printf(" ");
		while (*p != ' '&&p != a - 1)
			p--;
		q = p + 1;
		for (;*q != '\0'&&*q != ' ';q++)
			printf("%c",*q);
	}
}
main()
{
	char a[1024];
	gets(a);
	sb(a);
}
	