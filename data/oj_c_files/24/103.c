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
	char c[50][100];
	int len[50];
	int i,j,n;
	for(i=0;scanf("%s",c[i])!=EOF;i++)
	{
		len[i]=strlen(c[i]);
	}
	n=i;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(len[i]<len[j])
				break;
		}
		if(j==n)
		{
			printf("%s\n",c[i]);
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(len[i]>len[j])
				break;
		}
		if(j==n)
		{
			printf("%s\n",c[i]);
			break;
		}
	}
	
}