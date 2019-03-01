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
	int n;
	scanf("%d",&n);
	char dc[50][30];
	int i;
	int sz[50];
	for(i=0;i<n;i++)
	{
		scanf("%s",dc[i]);
		sz[i]=strlen(dc[i]);
	}
	for(i=0;i<n;i++)
	{
		if(dc[i][sz[i]-1]=='g')
		{
			int j;
			for(j=0;j<sz[i]-3;j++)
				printf("%c",dc[i][j]);
		}
		else
		{
			int j;
			for(j=0;j<sz[i]-2;j++)
				printf("%c",dc[i][j]);
		}
		printf("\n");
	}
	return 0;
}