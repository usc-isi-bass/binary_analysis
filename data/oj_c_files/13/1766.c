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
	int n;
	scanf("%d",&n);
	int num[20001];
	memset(num,0,20001);
	int i,j;
	int count=1;
	int number;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&number);
		if(i==1)
		{
			num[0]=number;
		}
		else
		{
			for(j=1;j<=count;j++)
			{
				if(number==num[j-1])
				{
					break;
				}
				else
				{}
				if(j==count)
				{
					count++;
					num[count-1]=number;
				}
				else
				{}
			}
		}
	}
	for(i=1;i<count;i++)
	{
		printf("%d ",num[i-1]);
	}
	printf("%d",num[count-1]);
	return 0;
}