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

char c[30];
void main()
{
	char *p;
	p=c;
	gets(c);
    while(*p!='\0')
	{
		while(*p<'0'||*p>'9')
		{p+=1;if(*p=='\0')break;}
		printf("%c",*p);
		p+=1;
		if(*p<'0'||*p>'9')printf("\n");
	}
}
