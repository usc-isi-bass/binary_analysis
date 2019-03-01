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
	int i,j,n,a[300]={0},u=0,k=0,b[300]={0};
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		scanf("%d",a+i);
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			if(a[i]==b[j])
				break;
		}
		if(j==n)
		{
			b[k]=a[i];
			k++;
		}
	}
	for(i=0;i<=k-2;i++)
		printf("%d,",b[i]);
	printf("%d\n",b[k-1]);
}