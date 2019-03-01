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
    int n,k,i,j,count=0;
	scanf("%d%d",&n,&k);
	int*a=(int*)malloc(sizeof(int)*n);

	for (i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
    for (i=0;i<n-1;i++)
	{
		for (j=n-1;j>i;j--)
		{
			int b=k-a[i];
			if (b==a[j])
			{
				count++;
			}
		}
	}
	if (count!=0)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	free(a);
	return 0;
}