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
	char a[100];
	int b[100],i,n,m=0,j;
	gets(a);
	n=strlen(a);
	b[0]=0;
	for(i=0;i<=n;i++)
	{
		if(a[i]==' ')
		{
			m++;
			b[m]=i;
		}
	}
if(m==0) puts(a);
else
{
	for(i=b[m]+1;i<=n-1;i++)
	{
		printf("%c",a[i]);
	}
	printf(" ");
	for(i=m-1;i>=1;i--)
	{
		for(j=b[i]+1;j<=b[i+1];j++)
		{
			printf("%c",a[j]);
		}
	}
	for(i=0;i<=b[1]-1;i++)
	{
		printf("%c",a[i]);
	}
	printf("\n");
}
}
