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
    int i,j,k,n,a[1000];
	
	scanf("%d%d",&n,&k);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	int flag;
	for (i=0;i<n;i++)
	{
		flag=0;
		for (j=0;j<n;j++)
		{
			if (k==a[i]+a[j])
			{
				flag=1;break;
		}}
		
		if (flag)
		{
			break;
		}
	}
	if (flag)
	{
		printf("yes");
		
	}
	else
		printf("no");
	return 0;
	
}
