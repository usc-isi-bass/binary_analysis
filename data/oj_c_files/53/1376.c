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
	int i,sum,k,n,a[300],b[300],result;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	b[0]=a[0];
	sum=1;
	for(i=1;i<n;i++)
	{
		result=1;
		for(k=0;k<sum;k++)
		{
			if(a[i]==b[k]) result=0;
		}
		if(result)
		{
			b[sum]=a[i];
			sum++;
		}
	}
	printf("%d",b[0]);
	for(k=1;k<sum;k++)
	{
		printf(",%d",b[k]);
	}
}

