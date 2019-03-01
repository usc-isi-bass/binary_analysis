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

char* getmemory(int num)
{
	char *p=(char*)malloc(num*sizeof(char));    //????????
	return p;
}

void main()
{
	char *str,*p1,*a,*b;          //str???????,p1?????????
	int n;                        //a,b???????????.
	str=getmemory(100);          // ?????
	p1=a=str;
	gets(str);
	n=strlen(str);
	b=a+n;
	for(str=a;str<b;)
	{
		if(*str==' ')
		{	p1=str;
			if(*(p1+1)==' ')
			{
				p1=str;
				for(;p1<b-1;p1++){*p1=*(p1+1);}
				n-=1;
			}
			else str++;
		}
		else str++;
	}
	for(p1=a;p1<a+n;p1++)printf("%c",*p1);
}

