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
	int n,k,a,e[10008],i,j,m,log;
	log=0;
	scanf("%d %d",&n,&k);
	if(n==1)
	{
		if(n==k)
		{
			printf("yes");
		}else{
			printf("no");
		}
	}else{
		scanf("%d",&a);
		e[1]=a;
	    for(i=2;i<=n;i++)
		{
	     	scanf(" %d",&a);
			e[i]=a;
		}
		for(j=1;j<=n;j++)
		{
			for(m=n;m>j;m--)
			{
				if((e[j]+e[m])==k)
				{
					printf("yes");
					log=1;
					break;
				}
			}
			if(log>0.1)
			{
				break;
			}
		}
		if(log<0.1)
		{
			printf("no");
		}
	}
		return 0;
}




