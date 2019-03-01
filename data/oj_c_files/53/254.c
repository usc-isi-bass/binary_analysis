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
	int a[300];
	int i,n,m,b,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n");
	i=0;m=n-1;
	while(i<=m)
	{
		c=i+1;
		while(c<=m)
		{
			if(a[i]==a[c])
			{
				for(b=c;b<=m-1;b++)
				{a[b]=a[b+1];}
				m--;
			}
			else c++;
		}
		i++;
	}
	for(i=0;i<=m;i++)
	{
		printf("%d",a[i]);
		if(i<m)printf(",");
	}
	printf("\n");
}






	