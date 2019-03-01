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
	int n,i,j,q,x=1;
	int shuzu[N],panduan[N];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&(shuzu[i]));
	}
	panduan[0]=0;
	for(i=1;i<n;i++)
	{
		for(q=0,j=0;j<i;j++)
		{
			if(shuzu[j]==shuzu[i])
			{
				q=1;
				break;
				
			}
		}

		panduan[i]=q;
	}
	for(i=0,x=0;i<n;i++)
	{
		if(panduan[i]==0)
		{
			x=x+1;
		}
	}
	for(i=0;i<n;i++)
	{
		if(panduan[i]==0&&(x!=1))
		{
			printf("%d ",shuzu[i]);
			x--;
		}
		else if(panduan[i]==0&&(x==1))
		{
			printf("%d",shuzu[i]);
			x--;
		}


	}

	return 0;
}

