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
	int n,i,j,k=0,a[300]={0},b[300]={0};
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",a+i);
	}
	b[0]=a[0];
	for(i=0;i<=n-1;i++)
	{
		int m=0;
		for(j=0;j<=k;j++)
		{
			if(a[i]!=b[j])
				m++;
		}
		if(m==k+1)
		{
			k++;
			b[k]=a[i];
		}
	}
	for(i=0;i<=k-1;i++)
		printf("%d,",b[i]);
	printf("%d",b[k]);
}



