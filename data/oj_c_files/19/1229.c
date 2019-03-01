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

int main()
{
	char *s,*a,*b,*p,*q;
	s=(char *)malloc(100);
	a=(char *)malloc(100);
	b=(char *)malloc(100);
	gets(s);
	gets(a);
	gets(b);
	q=s;
	for(p=s;;p++)
	{
		if(*p=='\0')
		{
			if(strcmp(q,a)==0)
			{
				printf("%s",b);
				break;
			}
			printf("%s",q);
			break;
		}
		if(*p==' ')
		{
			*p='\0';
			if(strcmp(q,a)==0)
				printf("%s ",b);
			else 
				printf("%s ",q);
			q=p+1;
		}
	}
	return 0;
}
			



 

	 

