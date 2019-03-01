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
	char s[100005],*p,*q;
	int n;
	gets(s);
	n=strlen(s);
	for(p=s;p<s+n-1;p++)
		printf("%c",(*p+*(p+1)));
		printf("%c",(*s+*(s+n-1)));
}