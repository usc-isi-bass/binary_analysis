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
	int a[100][100],i,j,min,max,e,b,c,d,n,t;
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}	
	max=0;
	min=200;
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)	
		{
			if(a[i][j]==0)
			{   
				if((i+j)>max)
				{
				max=i+j;
				e=i;b=j;
				}
				if((i+j)<min)
				{
				min=i+j;
				c=i;d=j;
				}
			}
		}
	}
   	t=(e-c+1)*(b-d+1)-2*(e-c+1)-2*(b-d-1);
	printf("%d",t);
	return 0;
}