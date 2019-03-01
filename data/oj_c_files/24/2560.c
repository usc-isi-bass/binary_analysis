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
	char c[300][100]={0};
	int a[300]={0};
	int i,j,max=0,min=100;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",c[i]);
	}
	for(i=0;i<n;i++)
	{
		a[i]=strlen(c[i]);
	}
	for(i=0;i<n;i++)
	{
		if(max<a[i]) max=a[i];
		if(min>a[i]) min=a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==max) 
		{
			printf("%s\n",c[i]);
			break;
		}
	}
    for(i=0;i<n;i++)
	{
		if(a[i]==min) 
		{
			printf("%s\n",c[i]);
			break;
		}
	}
	return 0;
}
