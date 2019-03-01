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
	int n,*a,*d,j,i;
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*(n+1));
	for(i=1;i<n+1;i++)
		scanf("%d",&a[i]);
	d=(int*)malloc(sizeof(int)*(n+1));
	for(i=1;i<=n;i++)
		d[i]=1;
	for(i=n-1;i>0;i--)
	{
		
		for(j=i+1;j<=n;j++)
		{
			
			if(a[j]<=a[i])
				if(d[i]<d[j]+1)
					d[i]=d[j]+1;
		}
	}
	int max=d[1];
	for(i=1;i<=n;i++)
		if(max<d[i])
			max=d[i];
	printf("%d\n",max);
	free(a);
	free(d);
	return 0;
}

