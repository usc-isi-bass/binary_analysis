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
	char a[300];
	int b[52];
	int i,n,k,j;
	for (i=0;i<52;i++)
		b[i]=0;
	j=0;
	gets(a);
	n=strlen(a);
	for (i=0;i<n;i++)
	{
		if(a[i]>=65&&a[i]<=90)
		{
			k=a[i]-65;
			b[k]=b[k]+1;
		}
		if (a[i]>=97&&a[i]<=122)
		{
			k=a[i]-71;
			b[k]=b[k]+1;
		}
	}
	for (i=0;i<26;i++)
	{
		if (b[i])
		{
			printf("%c=%d\n",i+65,b[i]);
			j++;
		}
	}
	for (i=26;i<52;i++)
	{
		if (b[i])
		{
			printf("%c=%d\n",i+71,b[i]);
	        j++;
		}
	}
	if (j==0)
		printf("No");
}

