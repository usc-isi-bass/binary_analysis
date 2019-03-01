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
	int n,i;
	char a[100];
	char *p1,*p2;
	gets(a);
	n=strlen(a);
	p1=&a[n-1];
	p2=&a[n-1];
    char *p=p1;
	for(i=n-1;i>=0;i--)
	{
		p1=&a[i];
		if(*p1==' ')
		{
			for(p=p1+1;p<=p2;p++)
				printf("%c",*p);
			printf(" ");
			p2=p1-1;
		}
		if(p1==a)
			for(p=p1;p<=p2;p++)
				printf("%c",*p);
	}
}

