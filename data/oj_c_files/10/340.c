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
	int f(int x,int y,int b[]);
	int i,k,a[30],max;
	scanf("%d",&k);
	for(i=0;i<k;i++)
		scanf("%d",&a[i]);
	for(i=0,max=0;i<k;i++)
	{
		if(f(i,k,a)>=max)
			max=f(i,k,a);
	}
	printf("%d\n",max);
	return 0;
}
int f(int x,int y,int b[])
{
	int z,i,p,m;
	for(i=x+1,p=0;i<y;i++)
	{
		if(b[i]<=b[x])         //only compare with b[x]
			p++;
	}
	if(p==0)
	{
		z=1;
	}
	else 
	{
		for(i=x+1,m=0;i<y;i++)
		{
			if(b[i]<=b[x])
			{
				if(m<=f(i,y,b))
					m=f(i,y,b);      // after m there are f nums<b[i]
			}
		}
		z=m+1;
	}
	return z;
}
