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
	int m,n;
	scanf("%d",&n);
	char str[10];
	sprintf(str,"%d",n);
	m=strlen(str);
	char *p;
	p=str;
	for(p=str+m-1;p>=str;p--)
		printf("%c",*p);
}