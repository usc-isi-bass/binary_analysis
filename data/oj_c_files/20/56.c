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
	int i,n,j;
	char str[10],substr[3];
	int f(char str[10]);
	for(j=0;scanf("%s %s",str,substr)!=EOF;j++)
	{
	n=strlen(str);
	for(i=0;i<=f(str);i++)
		printf("%c",str[i]);
	printf("%s",substr);
	for(i=f(str)+1;i<n;i++)
		printf("%c",str[i]);
	printf("\n");
	}
}
int f(char str[10])
{
	char c;
	int n,i,x=0;
	c=str[0];
	n=strlen(str);
	for(i=1;i<n;i++)
	{
		if(str[i]>c)
		{
			c=str[i];
			x=i;
		}
	}
	return(x);
}