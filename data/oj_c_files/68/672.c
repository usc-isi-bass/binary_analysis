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
	int n,m,i,j,k,x,l,t;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{
		m=i/2;
		for(j=3;j<=m;j=j+2)
		{
			x=0;
			l=sqrt(j);
			for(k=1;k<=l;k++)
			{
				if(j%k==0)
				x++;
			}
			if(x==1)
			{
				x=0;
				t=i-j;
				l=sqrt(t);
				for(k=1;k<=l;k++)
				{
					if(t%k==0)
					x++;
				}
				if(x==1)
				{printf("%d=%d+%d\n",i,j,t);
				break;}
			}
		}
	}
}