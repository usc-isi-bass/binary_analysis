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


int hui(int x)
{
	int i, j;
	char a[10];
	sprintf(a,"%d",x);
	for(i=0, j=strlen(a)-1;i<j;i++, j--)
	{
		if(a[i] != a[j])
			return 0;
	}
	return 1;
}

int su(int x)
{
	int i;
	for(i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
			return 0;
	}
	return 1;
}

int main()
{
	int m, n, no=0;
	scanf("%d%d", &m, &n);
	for(m;m<=n;m++)
	{
		if((no!=0) && (hui(m)==1 && su(m)==1))
			printf(",%d",m);
		if((no==0) && (hui(m)==1 && su(m)==1)) 
		{ 
			printf("%d",m);
			no++;
		}
	}
	if(no==0)
		printf("no");
	return 0;
}