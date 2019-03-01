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
	char s[150],a[100],b[100],*p,*q;
	gets(s);
	gets(a);
	gets(b);
	q=s;
	while(strstr(q,a)!=NULL)
	{p=strstr(q,a);
	*p='\0';
	if((*(p-1)!=' ')&&((p-1)>s)||(*(p+strlen(a))!=' ')&&(p+strlen(a)<s+strlen(s)))
		printf("%s%s",q,a);
	else
		printf("%s%s",q,b);
	p+=strlen(a);
	q=p;
	}
	printf("%s",q);
}
