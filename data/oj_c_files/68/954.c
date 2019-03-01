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

void main ()
{
	int n,f[30000];
	int i,j,k,l;
	int a=0,b=0,c,temp; 
	int x,y;


	scanf("%d",&n);

	for(i=6;i<=n;i++)
	{
		if(i%2==0)
		{
			f[a++]=i;
		}
	}

	for(i=0;i<=a;i++)
	{
		for(j=3;j<f[i];j+=2)
		{
			x=sqrt(j);

			for(k=2;k<=x;k++)
			{
				if(j%k==0)break;
			}
			if(k>=x+1)
			{
				temp=f[i]-j;
				y=sqrt(temp);
				for(l=2;l<=y;l++)
				{
					if(temp%l==0)break;
				}
				if(l>=y+1)
				{
					printf("%d=%d+%d\n",f[i],j,temp);break;
				}
			}
			
		}
	}
}