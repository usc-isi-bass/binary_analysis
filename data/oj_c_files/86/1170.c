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
	int time,i,n,broken,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&broken);
		if(broken==0)
		{
			printf("60\n");
		}
		else
		{
		int *num=(int*)malloc(sizeof(int)*broken);
		for(j=0;j<broken;j++)
		{
			scanf("%d",&num[j]);
		}
		for(j=broken-1;j>=0;j--)
		{
			time=num[j]+(j+1)*3;
			if(time<60)
			{
				printf("%d\n",60-(j+1)*3);
				break;
			}
			else if(time<63)
			{
				printf("%d\n",num[j]);
				break;
			}
		}
		free(num);
		}
	}
	return 0;
}
