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
	char a[80];
	char b[80];
	int m,i;
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]<91)
		{a[i]=a[i]+32;}
	}
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]<91)
		{b[i]=b[i]+32;}
	}
	m=strcmp(a,b);
	if(m>0)
		printf(">");
	else if(m==0)
		printf("=");
	else
		printf("<");
	return 0;
}