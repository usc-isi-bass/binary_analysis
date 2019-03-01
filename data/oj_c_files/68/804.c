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
	int n,m=6,r,x,y;
	scanf("%d",&n);
	while(m<=n)
	{
		r=3;
		while(r<=m/2)
		{
			x=2;
			while(x<=sqrt(r))
			{
				y=r%x;
				if(y!=0) x=x+1;
				else x=r;
			}
			if(x==r)
			r=r+2;
			else
			{
				x=2;
				while(x<=sqrt(m-r))
				{
					y=(m-r)%x;
					if(y!=0) x=x+1;
					else x=m-r;
				}
				if(x==m-r) r=r+2;
				else {printf("%d=%d+%d\n",m,r,m-r);r=m;}
			}
		}
		m=m+2;
	}
}