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
	int a[1000],b[1000000];
	int i,j,n,k,m=0,sum=0,c;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			b[m]=a[i]+a[j];
			m++;
		}
	}
	for(c=0;c<m;c++)
	{
		if(b[c]==k)
		{
			sum=sum+1;
		}
	}
	if(sum!=0)
	{
		printf("yes");
	}
	else printf("no");
	return 0;
}