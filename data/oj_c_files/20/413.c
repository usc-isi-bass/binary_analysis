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

int find(char c[])
{
	int i,k;
	k=0;
	i=0;
	while(c[i]!='\0')
	{
		if(c[i]>c[k])
			k=i;
		i++;
	}
	return(k);
}

void main()
{
	char a[100],b[100];
	int i,k;
	while(scanf("%s%s",a,b)!=EOF)
	{
	k=find(a);
	for(i=0;i<=k;i++)
		printf("%c",a[i]);
	printf("%s",b);
	i=k+1;
	while(a[i]!='\0')
	{
		printf("%c",a[i]);
		i++;
	}
	printf("\n");
	}
}