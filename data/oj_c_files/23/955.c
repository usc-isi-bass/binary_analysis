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
	char str1[100],*p,*q,*a;
	int n;
	gets(str1);
	n=strlen(str1);
    p=str1+n-1;
	q=str1+n-1;
	a=str1+n-1;
	for(p=str1+n-1;p>=str1;p--)
	{
		if(*p==' ')
		{a=p-1;
		for(p=p+1;p<=q;p++)
		printf("%c",*p);
		printf(" ");
		q=a;
		p=a;}
	}
	for(p=str1;p<=q;p++)
	printf("%c",*p);
}