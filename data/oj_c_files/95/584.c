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

void main ()
{
	int i,j,x,y;
	char s[150],t[150],a,b;
	gets(s);
	gets(t);
	x=strlen(s);
	y=strlen(t);
	for (i=0;i<x;i++)
	{
		a=s[i];
		if(a>='a'&&a<='z')
			s[i]=s[i]-32;
	}
	for (j=0;j<y;j++)
	{
		b=t[j];
		if(b>='a'&&b<='z')
			t[j]=t[j]-32;
	}
	if (strcmp(s,t)>0)
		printf(">\n");
	else if (strcmp(s,t)<0)
		printf("<\n");
	else printf("=\n");
}