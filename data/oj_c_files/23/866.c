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
	int i,m,n,q,s=0;
	char a[111],*p;
	gets(a);
	n=strlen(a);
	for(i=0;a[i]!='\0'&&a[i]!=' ';i++)
	    s=s+1;
	if(s==n) printf("%s",a);
	else
	{
    q=a+n;
	for(p=a+n;p>=a+s;p--)
	{
		if(*p==' ')
		{
			m=p;
			for(p=m+1;p<q;p++)
				printf("%c",*p);
			printf(" ");
			q=m;
			p=m;
		}
	}
	p=a;
	for(i=0;i<s;i++)
		printf("%c",*p++);
	}
}