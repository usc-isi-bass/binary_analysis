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
	int i,j,n,flag,k=0;
	int zhishu[10000];
	scanf("%d",&n);
	for(i=3;i<n;i=i+2)
	{
		flag=0;
		for(j=3;j<sqrt(i)+1;j=j+2)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			zhishu[k]=i;
			k++;
		}
	}
	for(i=0;i<=k;i++)
	{
		for(j=k-1;j>=i;j--)
		{
			if(n-zhishu[i]==zhishu[j])
				printf("%d %d\n",zhishu[i],zhishu[j]);
		}
	}
	return 0;
}
