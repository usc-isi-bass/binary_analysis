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
	char s[100];
	char *p,*q,*f;
	int n;
	gets(s);
	n=strlen(s);
	p=s+n-1;
	q=s+n;
	for(p=s+n-1;p>=s;p--)
    {
		if(*p==' ')
		{
			for(f=p+1;f<q;f++)
			{printf("%c",*f);}
			printf(" ");
			q=p;
		}
	}
	p=s;
	for(p=s;;p++)
	{
		if(*p!=' '&&*p!='\0')
		printf("%c",*p);
		else
		break;
	}
	s[n]='\0';
}