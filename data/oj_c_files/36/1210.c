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
	char z[2][200];
	scanf("%s %s",z[0],z[1]);
	int i=0,j=0;
	char e;
	int n=strlen(z[0]);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(z[0][j]<=z[0][j+1])
			{
				e=z[0][j];
				z[0][j]=z[0][j+1];
				z[0][j+1]=e;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(z[1][j]<=z[1][j+1])
			{
				e=z[1][j];
				z[1][j]=z[1][j+1];
				z[1][j+1]=e;
			}
		}
	}
	if(strcmp(z[1],z[0])==0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}

