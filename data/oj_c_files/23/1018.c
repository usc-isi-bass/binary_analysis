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
	char a[100],*p,*q,*r;
	int i,n;
	gets(a);
	n=strlen(a);
	for(p=a;p<a+n-1;p++);
	q=p;
	for(i=0;i<n;i++)
	{
		if(*--p==' ') 
		{
			r=p;
			for(;p<q;)
				printf("%c",*++p);
			printf(" ");
			p=r;
			q=p-1;
		}
	}
	for(p=a;p<q+1;p++)
		printf("%c",*p);
}