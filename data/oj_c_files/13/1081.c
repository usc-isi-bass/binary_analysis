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
	int i,j,s,sum,num[100000]={0};
	scanf("%d",&sum);
	for(i=0;i<sum;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<sum;i++)
	{
		for(j=0;j<i;j++)
		{
			if(num[i]==num[j])
			{
				num[i]=0;
				break;
			}
		}
	}
	printf("%d",num[0]);
	for(i=1;i<sum;i++)
	{
		if(num[i]==0)
			continue;
		else printf(" %d",num[i]);
	}
}