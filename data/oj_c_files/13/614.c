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
	int a[20000],b[20000]={0};
	int i,j,k,m=0,n;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (i=0,j=0;i<n;i++,m=0)
	{
		for (k=j;k>=0;k--)
		{
			if (a[i]==b[k])
			{
				m=1;
				break;
			}
		}
		if (m==0)
		{
			b[j]=a[i];
			j++;
		}
	}
	for (i=0;i<j-1;i++)
		printf("%d ",b[i]);
	printf("%d",b[j-1]);
	return 0;
}