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
	int temp=0;
	scanf("%d",&n);
	int count=0;
	int sz[100][2];
	int pd[100]={0};
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	for(int k=0;k<n;k++)
	{
		if((sz[k][0]>=90)&&(sz[k][0]<=140)&&(sz[k][1]>=60)&&(sz[k][1]<=90))
		{
			pd[k]=1;
		}
		
	}
	for(int l=0;l<n;l++)
	{  
		if(pd[l]==1)
		{
			count++;
		}
		if(pd[l]==0)
		{
			if(count>temp)
			{
               temp=count;
			}
		    
		    count=0;
		}
	}
	if(count>temp)
	{
		temp=count;
	}
	printf("%d",temp);


	return 0;
}

