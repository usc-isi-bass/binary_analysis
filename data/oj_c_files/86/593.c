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
	int counts;int sum;
	int a[100];
	int n;int i,c;int m;
	scanf("%d",&n);
	while(n--)
	{
		c=0;
		sum=0;
		scanf("%d",&m);
		for(i=0;i<m;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<m;i++)
		{
			c=3*m;
			if(a[i]+i*3>60)
			{
				c=i*3;
				break;
			}
			else if(a[i]+(i+1)*3>60)
			{
				c=60-a[i];
				break;
			}
		}
		printf("%d\n",60-c);
	}
}