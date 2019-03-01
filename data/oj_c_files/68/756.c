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

void main()
{
	long int u,p,a,q,n,i,j,k,m,r;
	scanf("%d",&n);
	for(i=6;i<=n;i++,i++)
	{
		for(j=3;j<=i/2;j++,j++)
		{
			p=sqrt(j);
			for(k=1;k<=p;k++,k++)
			if (k!=1)
			{r=j%k;
			if(r==0)  
				break;
			}
			if (k>p)
			{ q=i-j;
			u=sqrt(q);
			for(m=1;m<=u;m++,m++)
			if(m!=1)
			{a=q%m;
			if(a==0) break;
			}
			if(m>u&&q>=3) {printf("%d=%d+%d\n",i,j,q);break;}
			}
		}
	}
}