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
	int num[300]={0},n,i,j,flag=0,b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(num[i]==num[j])
			{
				num[j]=0;
			}
		}
	}
	printf("%d",num[0]);
	for(i=1;i<n;i++)
	{
		if(num[i]!=0)
		{
			printf(",%d",num[i]);
		}
	}
	printf("\n");
}