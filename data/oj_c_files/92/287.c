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

int mycomp(const void* a,const void* b)
{return *(int*)a-*(int*)b;}
int main()
{
	int tj[1001],qw[1001];
	int n,ibe,jbe,ien,jen,re;
	scanf("%d",&n);
	while(n!=0)
	{
		for(ibe=0;ibe<n;ibe++)
			scanf("%d",&tj[ibe]);
		for(jbe=0;jbe<n;jbe++)
			scanf("%d",&qw[jbe]);
		qsort(tj,n,sizeof(int),mycomp);
		qsort(qw,n,sizeof(int),mycomp);
		ibe=jbe=0;ien=jen=n-1;
		re=0;
		while(ibe<=ien)
		{
			if(tj[ibe]>qw[jbe])
			{
				re+=200;
				ibe++;jbe++;
			}
			else if(tj[ibe]<qw[jbe])
			{
				if(tj[ibe]>qw[jen])
				{
					re+=200;
					ibe++;jen--;
				}
				else if(tj[ibe]<qw[jen])
				{
					re-=200;
					ibe++;jen--;
				}
			}
			else if(tj[ien]>qw[jen])
			{
				re+=200;
				ien--;jen--;
			}
			else if(tj[ien]<qw[jen])
			{
				re-=200;
				ibe++;jen--;
			}
			else
			{
				if(tj[ibe]<qw[jen]) re-=200;
				ibe++;jen--;
			}
		}
		printf("%d\n",re);
		scanf("%d",&n);
	}
	return 0;
}
