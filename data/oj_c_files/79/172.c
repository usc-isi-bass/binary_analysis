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

void ysf(int n,int m)
{
	int i,j,b[300]={0},num,p;
	num=0;
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=m;j++)
		{
			num=num+1;
			if(num>n)
					num=num-n;
			while(b[num]==1)
			{
				num=num+1;
				if(num>n)
					num=num-n;
			}
		}
		b[num]=1;
	}
	for(i=1;i<=n;i++)
	{
		if(b[i]==0)
		{
			printf("%d\n",i);
			break;
		}
	}
}
void main()
{
	int i,j,n[100],m[100];
	for(i=0;;i++)
	{
		scanf("%d%d",&n[i],&m[i]);
		if(m[i]==0)
			break;
	}
	for(j=0;j<i;j++)
		ysf(n[j],m[j]);
}
