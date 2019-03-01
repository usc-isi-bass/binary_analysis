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
	int a[300],i,j,k;
	char c;
	i=0;
	while(1)
	{
		scanf("%d%c",&a[i],&c);
		if(c=='\n')
		{
			break;
		}
		else
		{
			i++;
		}
	}
	int max=0;
	for(j=0;j<=i;j++)
	{
		if(a[j]>=max)
		{
			max=a[j];
		}
	}
	int q=-1;
	for(j=0;j<=i;j++)
	{
		if(a[j]>q&&a[j]<max)
		{
			q=a[j];
		}
	}
	if(q==-1)
	{
		printf("No");
	}
	else
	{
		printf("%d",q);
	}
	return 0;
}