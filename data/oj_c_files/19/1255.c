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
	int t=0;
	char *p;
	char *a,*b,*c;
	p=(char*)malloc(200*sizeof(char));
	a=(char*)malloc(100*sizeof(char));
	b=(char*)malloc(100*sizeof(char));
	gets(p);
	gets(a);
	gets(b);
	c=p;
	while(*p!='\0')
	{
		if(*p!=' ')p=p+1;
		else
		{
			*p='\0';
			p=p+1;
			if(strcmp(c,a)==0)printf("%s ",b);
			else printf("%s ",c);
			c=p;
		}
	}
	do
	{
		if(strcmp(c,a)==0)printf("%s",b);
			else printf("%s",c);
			t=1;
	}while((*p=='\0')&&(t=0));
}