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
	char c[100];
	gets(c);
	int i,j,a[100],len,n;
	len=strlen(c);
	c[len]=' ';
	j=0;
	for(i=len;i>=0;i--)
	{
		if(c[i]==' ')
		{
			a[j]=i;
			j++;
		}
	}
	n=j-1;
	j=0;
	while(j!=n)
	{
		for(i=a[j+1]+1;i<a[j];i++)
			printf("%c",c[i]);
		printf(" ");
		j++;
	}
	for(i=0;i<a[n];i++)
		printf("%c",c[i]);
}
