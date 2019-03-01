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
	int i,j,k,m,n,num=0;
	scanf("%d",&n);
	int a[100001];
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
	for (i=0;i<n;i++)
	{
		if (a[i]==k)
		{
			m=i;
			for (j=i+1;j<n+1;j++,i++)
				a[i]=a[j];
			i=m-1;
			num=num+1;
		}
	}
	for(i=0;i<(n-num-1);i++)
		printf("%d ",a[i]);
	printf("%d",a[n-num-1]);
	return 0;
}