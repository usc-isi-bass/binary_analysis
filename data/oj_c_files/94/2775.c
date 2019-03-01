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
	int i,j,k,l,m,n,p,q,r,s,temp;
	scanf("%d",&n);
	j=1;
	int a[100];
	for (i=1;i<=n;i++)
	{
		scanf("%d",&k);
		if (k%2==1)
		{
			a[j]=k;
			j++;
		}
	}
	l=j-1;
	for (i=1;i<=l;i++)
	{
		for (j=i;j<=l;j++)
		{
			if (a[i]>=a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("%d",a[1]);
	for (i=2;i<=l;i++)
	{
		printf(",%d",a[i]);
	}	
	return 0;
}
	