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
	int a[8][8],i,j,k,g,x,y,z=0,m,n;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	   for(j=0;j<n;j++)
	   {
			scanf("%d",&a[i][j]);
		}
		for(i=0;i<m;i++)
		{ 
	       for(j=0;j<n;j++)
	       {x=0;y=0;
				for(k=0;k<n;k++)
				{
					if(a[i][j]>=a[i][k])
					x=x+1;
				}
				for(g=0;g<m;g++)
				{
					if(a[i][j]<=a[g][j])
					y=y+1;
				}
				if(x==n&&y==m)
				{
				printf("%d+%d",i,j);
				z=1;
			}
		}
		} 
		if(z==0)
		printf("No");
		return 0;
	}