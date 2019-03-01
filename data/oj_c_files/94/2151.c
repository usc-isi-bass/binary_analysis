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
	int a[501],b[501];
	int i,j=1,t,n,p,m=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==1)
		{
			b[j]=a[i];
			j++;
			m++;
		}
	}
	for(p=1;p<m-1;p++)
	{
		for(j=1;j<m-p;j++)
		{
			if(b[j]>b[j+1])
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}
	}
	printf("%d",b[1]);
	for(j=2;j<=m-1;j++)
	{
		printf(",%d",b[j]);
	}
	return 0;
}
