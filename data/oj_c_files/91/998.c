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
	char a[130];
	char *p=a;
	gets(a);
	for(i=1;i<strlen(a);i++)
	putchar(*p+*(++p));
	putchar(*p+*a);
	return 0;
}