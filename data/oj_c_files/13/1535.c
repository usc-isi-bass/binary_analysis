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
	int n,a[20000]={'\0'},i=0,j=0,k=0,temp,count;
	scanf("%d",&n);
	scanf("%d",&a[0]);
	printf("%d",a[0]);
	for(i=1;i<=n-1;i++)
	{
		scanf("%d",&temp);
		count=0;
		for(j=0;j<=k;j++)
		{
			if(temp==a[j])
				break;
			else
				count++;
		}
		if(count==k+1)
		{
			k++;
			a[k]=temp;
		}
	}
	for(i=1;a[i]!='\0';i++)
		printf(" %d",a[i]);
}