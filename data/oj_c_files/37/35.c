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
	char a[100001];
	int b[300]={0};
	int n,j,m,i,p;
	scanf("%d",&m);
	for (j=1;j<=m;j++)
	{
		for (i=1;i<=300;i++)
			b[i]=0;
		scanf("%s",a);
	    n=strlen(a);
	for (i=0;i<n;i++)
	{
		p=a[i];
		b[p]++;
	}
	i=0;
	while ((b[a[i]]!=1) && (i<n))
		i++;
	if (i<n)
		printf("%c\n",a[i]);
	else
		printf("no\n");
	}
	return 0;
}