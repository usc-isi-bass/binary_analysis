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
	
	int n,i,j,k,a[500],sum=0,b[500];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i-1]);
		if ((a[i-1]%2)!=0)
			{
				sum+=1;
				b[sum-1]=a[i-1];
		}
	}
	for(j=1;j<sum;j++)
		{
			for(i=1;i<sum-j+1;i++)
		{
			if(b[i-1]>b[i])
				{
					k=b[i-1];
					b[i-1]=b[i];
					b[i]=k;
			}}
	}

	for(i=1;i<=sum;i++)
		{
			printf("%d",b[i-1]);
			if(i==sum) break;
			printf(",");
	}
		return 0;
}