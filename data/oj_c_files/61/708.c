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


int main(int argc, char* argv[])
{
	int sz[100];
	int m;
	int sum=0;
	scanf("%d",&m);
	int shuru[100];
	for(int i=0;i<m;i++)
	{
		scanf("%d",&(shuru[i]));
	}
	for(int h=0;h<m;h++)
	{
		
	for(int j=0;j<shuru[h];j++)
	{
		if(j<=1)
		{
			sz[j]=1;
		}
		if(j>=2)
		{
			sz[j]=sz[j-1]+sz[j-2];
		}
		sum=sz[j];
	}
	printf("%d\n",sum);

	}

	return 0;
}