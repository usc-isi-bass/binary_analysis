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
	int z[8][8],i,j,k,m,n,a[8],h;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{	
		for(j=0;j<n;j++)
		{
			scanf("%d",&z[i][j]);
		}
	}

	for(i=0;i<m;i++)
	{h=z[i][0];
k=0;
		for(j=0;j<n;j++)
		{
                            
			if(z[i][j]>h)
			{
                                    h=z[i][j];
				k=j;
			}
			
		}
		a[i]=k;
	}
	j=0;
	for(i=0;i<m;i++)
	{
		k=0;
		for(h=0;h<m;h++)
		{
			
			if(z[h][a[i]]<z[i][a[i]])
				k=1;
		}
		if(k==0)
		{
			printf("%d+%d",i,a[i]);
			j=1;
		}
	}
	if(j==0)
	{
		printf("No");
	}
	return 0;
	
}