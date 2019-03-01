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
	int n,i,a[100],max,max2,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i-1]);
	}
	max=a[0];
	max2=a[0];
	for(i=2;i<=n;i++)
	{
		if(max<=a[i-1])
		{
			max=a[i-1];
		j=i;
		}
		
	}
	for(i=2;i<=n;i++)
	{
		if(i==j)
			continue;
		else if(max2<=a[i-1])
			max2=a[i-1];
		
	}
	printf("%d\n%d",max,max2);
	
	return 0;
}
