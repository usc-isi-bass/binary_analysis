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

main()
{
	int a[301],n,m,i,j,k;
	for(;;)
	{
		scanf("%d %d",&n,&m);
		k=n;
		if(n>0)
		{
			for(i=1;i<=n;i++)
				a[i]=0;
			for(j=1;k>1;)
			{
				for(i=1;i<=n&&k>1;i++)
				{
					if(!a[i]&&j!=m)
						j++;
					else if(!a[i]&&j==m)
					{
						a[i]=1;
						j=1;
						k--;
					}
				}
			}
			for(i=1;i<=n;i++)
				if(!a[i])
					printf("%d\n",i);
		}
		else
			break;
	}
}
