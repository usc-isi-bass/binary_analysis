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
	int k,n,i,j,*p,total,r;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n);
		p=(int*)malloc(sizeof(int)*n);
		for(j=0;j<n;j++)
		{
			scanf("%d",&p[j]);
		}
		if((p[n-1]+n*3)<=60)
		{
			total=60-n*3;
		}
		else
		{
			for(r=1;r<n;r++)
			{
				if((p[n-r]+3*(n-r))<=60)
				{
				   total=p[n-r];
				   break;
				}
			    else if((p[n-r-1]+(n-r)*3)<=60)
				{
				   total=60-(n-r)*3;
				   break;
				}
			}
			    
		}
		printf("%d\n",total);
		free(p);
	}
	return 0;
}