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
	char *p,*q;
	int a=0;
	p=(char*)malloc(30*sizeof(char));
	q=p;
	gets(p);
	while(*q!='\0')
	{
		if(*q<='9'&&*q>='0')
		{
			printf("%c",*q);
			a=0;
		}
		if((*q>'9'||*q<'0')&&a==0)
		{
			printf("\n");
			a++;
		}
		q++;
	}
}