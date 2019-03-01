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
	int n,k,i,j,count=0;
	int *a;
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
	for(i=0;i<=n-1-count;i++)
	{
		if(a[i]==k)
		{
			count++;
			for(j=i+1;j<=n-count;j++)
				a[j-1]=a[j];
			i--;
		}
		/*printf("count=%d %d\n",count,a[i]);*/
	}
	printf("%d",a[0]);
	for(i=1;i<=n-1-count;i++)
		printf(" %d",a[i]);
	printf("\n");
	return 0;
}