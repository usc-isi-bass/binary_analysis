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
	char str[1000][40];
	int n,i,j,a[1000]={0},line=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
		for(j=0;str[i][j]!='\0';j++)
		{
			a[i]=a[i]+1;
		}
	}
	for(i=0;i<n;i++)
	{
		line=line+a[i];
		if(line>80)
		{
			printf("\n");
			if(i==n-1)
				printf("%s",str[i]);
			else
				printf("%s ",str[i]);
			line=a[i]+1;
		}
		else
		{
			if(i==n-1)
				printf("%s",str[i]);
			else
			{
				if(line+a[i+1]+1>80)
					printf("%s",str[i]);
				else
					printf("%s ",str[i]);
			}
			line=line+1;
		}
	}
	return 0;
}