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

int a[1000][1000];
int main()
{
	int n,i,j,s=0,t=0,q,mianji;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		q=0;
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				s++;
				q=1;
			}
		}
		if(q==1)
			break;
	}
	for(j=0;j<n;j++)
	{
		q=0;
		for(i=0;i<n;i++)
		{
			if(a[i][j]==0)
			{
				t++;
				q=1;
			}
		}
		if(q==1)
			break;
	}
	mianji=(t-2)*(s-2);
	printf("%d",mianji);
	return 0;
}
