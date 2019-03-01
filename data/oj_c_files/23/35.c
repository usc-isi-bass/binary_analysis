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
	char str[101];gets(str);
	int n;n=strlen(str); 
	char *p1,*p2,*head,*p3;
	head=str;p1=p2=p3=str+n;
	for(;p1>=head;p1--)
	{
		if(*p1==' ')
		{
			p3=p1+1;printf("%s",*p2=='\0'?"":" ");
			for(;p3<p2;p3++)	
		    	printf("%c",*p3);
		p2=p1;
		}
		else if(p1==head)
		{
			printf("%s",*p2=='\0'?"":" ");
			for(p3=p1;p3<p2;p3++)
			    printf("%c",*p3);
		}
		
	}
}