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
	int i,j,k,l,m,n;
	char *p,*q;
	p=(char*)malloc(100*sizeof(char *));
	q=(char*)malloc(100*sizeof(char *));
	gets(p);
	l=strlen(p);
	for (i=0;i<l-1;i++)
	{
		*(q+i)=*(p+i)+*(p+i+1);
	}
	*(q+l-1)=*(p+l-1)+*p;
	*(q+l)='\0';
	puts(q);
}