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
	int i,j,n,q[1000][1000],a,b,c,d;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&q[i][j]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(q[i][j]==0) 
			{
				a=i+1;
				b=j+1;
				goto tsu;
			}
		}
	}
tsu:for(i=n-1;i>=0;i--)
	{
		for(j=n-1;j>=0;j--)
		{
			if(q[i][j]==0) 
			{
				c=i-1;
				d=j-1;
			    goto pku;
			}
		}
	}
pku:printf("%d",(c-a+1)*(d-b+1));
}