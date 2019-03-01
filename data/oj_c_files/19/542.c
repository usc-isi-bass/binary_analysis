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
	char str[300]={'\0'},w1[100],w2[100];
	char *p,*q;
	
	gets(str);
	gets(w1);
	gets(w2);
	p=str;
	q=str;
	while(*p!=' ')
	{
		p++;
	}
	*p='\0';
	
	if(strcmp(q,w1)==0)
	{
		printf("%s",w2);
	}
	else
	{
		printf("%s",q);
	}
	p++;
	q=p;
	
	while(*p!='\0')
	{
		p++;
		if((*p==' ')||(*p=='\0'))
		{
			*p='\0';
			
			printf(" ");
				if(strcmp(q,w1)==0)
				{
					printf("%s",w2);
				}
				else
				{
					printf("%s",q);
				}
					
				p++;
				q=p;
		}
	}
}




