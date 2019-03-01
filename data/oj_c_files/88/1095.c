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
	char a[30],*p;
	int i,k;
	gets(a);
	k=strlen(a);
	p=a;
    for(p=a;p<a+k;p++)
	{
		if(*p>='0'&&*p<='9'&&*(p+1)>='0'&&*(p+1)<='9')
			printf("%c",*p);
		if(*p>='0'&&*p<='9'&&(*(p+1)<'0'||*(p+1)>'9'))
			printf("%c\n",*p);
	}
}