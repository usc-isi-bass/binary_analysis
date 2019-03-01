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

int main ()
{
	int n,k,i,j,f,zs[N];
	scanf("%d%d",&n,&k);                                     
	for(i=0;i<n;i++)
	{
		scanf("%d",&(zs[i]));
	}
		for(i=0;i<n;i++)
		{
			f=0;
			for(j=0;j<n,j!=i;j++)
			{
				if(zs[i]+zs[j]==k)
				{
					f=1;
					break;
				}
			}
			if(f==1)
			{
				break;
			}
		 }
		if(f==1)
		{
			printf("yes");
		}else
		{
			printf("no");
		}
return 0;
}