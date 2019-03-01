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

void main()
{
	char str[200];
	gets(str);
	char a;
	char *p,*q;
	p=&str[0];
	q=&str[1];
	a=*p;
	while (*q!='\0')
	{
		*p=*p+*q;
		p++;
		q++;
	}
	*p=*p+a;
	printf("%s\n",str);
}
