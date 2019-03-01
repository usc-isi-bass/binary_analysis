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
	int n,m,i,j,a=0,b,c,d,e,f=0,shuzu[8][8];
	scanf("%d,%d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&shuzu[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(shuzu[i][j]>=a)
			{
				a=shuzu[i][j];
				b=j;
				d=i;
			}
		}
		e=a;
		for(c=0;c<n;c++)
		{
			if(a>shuzu[c][b])
			{
				a=shuzu[c][b];
			}
		}
		if(e==a)
		{
			printf("%d+%d",d,b);
			return 0;
		}
	}
	
		printf("No");

	return 0;
}