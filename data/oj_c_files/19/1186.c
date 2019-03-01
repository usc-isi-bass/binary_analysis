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
	char *p[100],*a,*b;
	char c;
	int i,n,m,l;
	for(i=0;i<=100;i++)
	{
	p[i]=(char *)malloc(100);
	}
	for(i=0,n=0;;i++)
	{
		scanf("%s",p[i]);
		n++;
		if((c=getchar())=='\n')
			break;
	}
	a=(char *)malloc(10);
	b=(char *)malloc(10);
	gets(a);
	gets(b);
	for(i=0;i<n;i++)
	{
		if(strcmp(p[i],a)==0)
			strcpy(p[i],b);
	}
	for(i=0;i<n;i++)
	{
		printf("%s",p[i]);
		if(i!=n-1)
			printf(" ");
	}
}