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
	int n,m,i,j,tr;
	int a[150];
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		if(i==1)
			scanf("%d",&a[i]);
		if(i!=1)
			scanf(" %d",&a[i]);
	}
	for(i=n+1-m;i<=n;i++)
	{
		for(j=i;j>=i-(n-m)+1;j--)
		{
			tr=a[j];
			a[j]=a[j-1];
			a[j-1]=tr;
		}		
	}
	for(i=1;i<=n;i++)
	{
		printf("%d",a[i]);
		if(i!=n)
			printf(" ");
	}
}