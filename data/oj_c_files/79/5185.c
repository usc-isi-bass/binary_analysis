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
	while(1)
	{
		int n,m;int a[310]={0};
		scanf("%d %d",&n,&m);
		if(n==0&&m==0) break;
		int i=0,j=-1;
		while(1)
		{
			i=i+1;
			j=j+1;
			if(j==n)
			{
				j=j-n;
			}
			if(a[j]==1)
			{
				i=i-1;
				continue;
			}
			if(i==m)
			{
				a[j]=1;	
				i=i-m;
			}
			int s=0,win=0,q=0;
			for(q=0;q<n;q++)
			{
				if(a[q]==0)
				{
					s+=1;
					win=q;
				}
				if(s>1)
				{
					break;
				}
			}
			if(q==n)
			{
				printf("%d\n",win+1);
				break;
			}
		}
	}
}