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
	int n,i,j=1,h=0, a[300];
	scanf("%d\n",&n);
	scanf("%d",&a[0]);
	for(i=1;(getchar())==' ';i++)
		scanf("%d",&a[i]);

	for(i=0;i<=n-1;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(a[i]==a[j]) 
			{
				a[j]=' ';
				
			}
		}
	}
	printf("%d",a[0]);
	for(i=1;i<=n-1;i++)
	{
		if (a[i]==' ') continue;
			printf(",%d",a[i]);
	
	}
	printf("\n");
}

