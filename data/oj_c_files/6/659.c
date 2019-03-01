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
	int  k=0,o=0,i=0,j=0,m=0,n=0,num=0,sum=0;
	scanf("%d",&k);
	for(o=0;o<k;o++)
	{
		scanf("%d%d",&m,&n);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&num);
            	if(i==0||i==m-1||j==0||j==n-1)
				{
		        	sum=sum+num;
				}
			}
		}
		printf("%d\n",sum);
		sum=0;
	}
	return 0;
}


