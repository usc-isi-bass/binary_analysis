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
	int m,n,i,j,k;
	int count,a[60];
	int time;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		count=0;
		scanf("%d",&m);
		for(j=0;j<m;j++)
			scanf("%d",&a[j]);
		for(k=1;k<=60;k++)
		{
			time=1;
			for(j=0;j<m;j++)
			{
				if(k==a[j])
				{
					time=4;
					break;
				}
			}
			count+=time;
			if(count>=60)
				break;
		}
		printf("%d\n",k);
	}
}
