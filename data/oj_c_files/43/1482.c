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
	int x,s=0,i,m,n,j,g,k,t=0;
	scanf("%d",&x);
	for(i=2;i<=x-1;i++)
	{
		s=0;
			for(j=2;j<=i-1;j++)
			{
				if(i%j==0) s=1;
			}
		if(s==0)
		{
			t=0;
			g=x-j;
			if(g>=j)
			{
				for(k=2;k<=g-1;k++)
				{
					if(g%k==0) t=1;
				}
				if(t==0) printf("%d %d\n",i,g); 
			}
		}
	}
	return 0;
}
