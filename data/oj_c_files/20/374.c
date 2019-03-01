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
	void f(char*p,char*q,int m);
	char s[12],c[10],sub[4];
	int i,k=0;
	
	while(scanf("%s %s",s,sub)!=EOF)
	{
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>s[k])
			k=i;
	}
	for(i=0;i<k+1;i++)
	{
		printf("%c",s[i]);
	}
	printf("%s",sub);
	f(s,c,k+1);
	puts(c);
	}
}

void f(char*p,char*q,int m)
{
	int n;
	n=0;
	while(n<m)
	{n++;p++;}
	while(*p!='\0')
	{*q=*p;
	p++;q++;}
	*q='\0';
}