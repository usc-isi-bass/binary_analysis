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
	int n;
	scanf("%d",&n);
	int *data;
	data=(int*)malloc(sizeof(int)*n*n);
	int i,j,k;
	int p=0,q=0,t=0,s=0;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d",&data[i*n+j]);
		}
		for (k=0;k<n;k++)
		{
			if(data[i*n+k]==0)
			{
				p=i+1;
				q=k+1;
			}
		}
	}
	int u,v;
	for (u=n-1;u>=0;u--)
	{
		for (v=n-1;v>=0;v--)
		{
			if(data[u*n+v]==0)
			{
				t=u+1;
				s=v+1;
			}
		}
	}
	int x,y,z;
	y=q-s-1;
	x=p-t-1;
	z=x*y;
	printf("%d\n",z);
	return 0;
}
