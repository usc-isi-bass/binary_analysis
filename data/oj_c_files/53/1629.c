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
	int num[100],n=0,i=0,j=0,k=0;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&num[i]);
		i++;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]==num[j]&&num[i]!=-1)
			{
				num[j]=-1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(num[i]==-1)
			continue;
		else
		if(i==0)
		printf("%d",num[i]);
		else
			printf(",%d",num[i]);
	}
	return 0;
}
