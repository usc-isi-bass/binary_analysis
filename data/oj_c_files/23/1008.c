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
	char a[100];
	int l,j,i,m=0;
	gets(a);
	char *p=a;
	l=strlen(a);
	for(p=&a[l-1];p>=&a[0];p--)
	{
		if(*p==' ')
		{
			*p='\0';
			printf("%s ",p+1);
		}
	}
	p=a;
	printf("%s",p);
}