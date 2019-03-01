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
	int n,a[50000],b[50000];
	int i,count=0;
	scanf("%d",&n);
	int min=10000,max=0;
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		if(a[i]<min)
			min=a[i];
		if(b[i]>max)
			max=b[i];
	}
	double k;
	if(min==max)
		printf("%d %d",min,max);
	else
	{
		for(k=min+0.5;k<max;k++)
		{
			int mark=0;
			for(i=0;i<n;i++)
			{
				if(k>a[i]&&k<b[i])
				{
					mark=1;
					break;
				}
			}
			if(mark==1)
				count++;
		}
		if(count==(max-min))
			printf("%d %d",min,max);
		else printf("no");
	}
	return 0;
}