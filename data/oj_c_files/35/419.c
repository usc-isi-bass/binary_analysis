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
	int m,n,num[8][8],i,j,max,min,l,h=0,u,y;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		max=num[i][0];
		l=0;
		for(j=1;j<n;j++)
		{	
			if(num[i][j]>max)
			{
				max=num[i][j];
				l=j;
			}
		}
	    y=0;
		for(u=0;u<m;u++)
		{  
	        min=max;
	        if(num[u][l]<min)
	        {
	            y++;
	        }
		}
		if(y==0)
		{
			printf("%d+%d",i,l);
		}
		else
		{
			h++;
	    }
	}
	if(h==m)
	{
		printf("No");
	}
	return 0;
}