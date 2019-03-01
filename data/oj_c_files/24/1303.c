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
	char *str,*p,*q,*tmax,*tmin;
	int n,max=0,min=1000,i;
	str=(char*)malloc(1000*sizeof(char));
	gets(str);
	p=q=str;
	while(1)
	{
		if(*p!=' '&&*p!='\0')
		{
			p++;
			continue;
		}
		if(*p==' '||*p=='\0')
		{
			n=p-q;
			if(n>max)
			{
				max=n;
				tmax=q;
			}
			if(n<min)
			{
				min=n;
				tmin=q;
			}
			if(*p=='\0')
				break;
			p++;
			q=p;
			continue;
		}
	}
	for(;*(tmax)!=' '&&*(tmax)!='\0';tmax++)
		printf("%c",*tmax);
	printf("\n");
	for(;*(tmin)!=' '&&*(tmin)!='\0';tmin++)
		printf("%c",*tmin);
}