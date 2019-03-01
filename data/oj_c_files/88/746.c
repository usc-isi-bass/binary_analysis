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
	char *p,c,*q;
	int s=1,i=0;
	p=(char *)malloc(40*sizeof(char));
	do
	{
		c=getchar();
		p[i]=c;
		
		i++;
	}
	while(c!='\n');
	q=p;
	for(;*q!='\n';q++)
	{
		

		if(*q>='0'&&*q<='9')
		{
			
				printf("%c",*q);
		       s=0;
		}
		if((s==0 )&& (*q<'0'||*q>'9'))
		{
			printf("\n");
			s=1;
		}
	}
}