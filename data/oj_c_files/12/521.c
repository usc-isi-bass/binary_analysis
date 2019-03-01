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
	int a[300],i,n,k,j;
	for(i=0;i<=300;i++)
	{
	scanf("%d",&a[i]);
	if(a[i]==-1) break;
	}
	for(k=0;k<=300;k++)
	{
		if(a[k]==-1)break;
		if(a[k-1]==0||k==0)
		{
			n=0;
			for(i=k;a[i]!=0;i++)
			{
				
		for(j=i;a[j]!=0;j++)
		{
			if(a[i]==2*a[j]||a[j]==2*a[i]) n=n+1;
		}
			}
			printf("%d\n",n);
		}
	}
}

	


	

	