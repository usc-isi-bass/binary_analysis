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
	int i,j,n,cishu,num[100],sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&cishu);
		for(j=1;j<=cishu;j++)
		{
			scanf("%d",&num[j-1]);
		}
		if(cishu*3+num[cishu-1]<=60)
		{
			sum=60-3*cishu;
            printf("%d\n",sum);
		}
		else
		{
			for(j=1;j<=cishu;j++)
			{
				if(j*3+num[j-1]>60&&j*3+num[j-1]<=63)
				{
					printf("%d\n",num[j-1]);
					break;
				}
				else if(j*3+num[j-1]>63)
				{
					sum=60-3*(j-1);
					printf("%d\n",sum);
					break;
				}
			}
		}
	}
	return 0;
}

    