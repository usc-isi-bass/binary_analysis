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
	char a[80]={0},b[80]={0};
	int i;
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>=65&&a[i]<=90)
			a[i]=a[i]+32;
	}
	gets(b);
	for(i=0;b[i]!=0;i++)
	{
		if(b[i]>=65&&b[i]<=90)
			b[i]=b[i]+32;
	}
    if(strcmp(a,b)<0)
		printf("<");
    if(strcmp(a,b)>0)
		printf(">");
	if(strcmp(a,b)==0)
		printf("=");
}