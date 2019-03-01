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
	int a[500];
	int n,i,j,k,temp;
	j=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&k);
		if (k%2==1) 
		{
			a[j]=k;
			j++;
		}
	}
    for (i=j-1;i>=0;i--)
	{
		for (k=0;k<i;k++)
		{
			if (a[k]>a[k+1])
			{
				temp=a[k+1];
				a[k+1]=a[k];
				a[k]=temp;
			}
		}
	}
	for (i=0;i<j-1;i++)
	{
		printf("%d,",a[i]);
	}
	printf("%d",a[j-1]);
	return 0;
}
