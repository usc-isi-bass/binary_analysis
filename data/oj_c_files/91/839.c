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
	char str[101];
	char *p,t;
	int k;
	gets(str);
	k=strlen(str);
	t=*str;

	for (p=str;p<str+k-1;p++)
		*p=*p+*(p+1);
	*p=*p+t;

	puts(str);
	return 0;
}
