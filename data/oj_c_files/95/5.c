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
	char s[80],t[80];
	gets(s);
	gets(t);
	int m,n,i;
	m=strlen(s);
	n=strlen(t);
	for(i=0;i<m;i++)
	{
		if(s[i]>'A'&&s[i]<'Z')
		{
			s[i]=s[i]-'A'+'a';
		}
	}
	for(i=0;i<n;i++)
	{
		if(t[i]>'A'&&t[i]<'Z')
		{
			t[i]=t[i]-'A'+'a';
		}
	}
	int p;
	p=strcmp(s,t);
	if(p>0)
	{
		printf(">");
	}
	else if(p<0)
	{
		printf("<");
	}
	else
	{
		printf("=");
	}
	return 0;
}