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
	int n,a,i,j,sz[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a==1||a==2)
		{
			sz[a-1]=1;
		}
		else
		{				
			for(j=2;j<a;j++)
			{
				sz[0]=1;
				sz[1]=1;
				sz[j]=sz[j-2]+sz[j-1];
			}	
		}	
		printf("%d\n",sz[a-1]);
	}
	return 0;
}
