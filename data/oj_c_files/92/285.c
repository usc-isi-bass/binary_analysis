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

int mycomp(const void *a,const void *b)
{return *(int*)a-*(int*)b;}
int main()
{
	int n,iw,ib,re,jw,jb;
	int tj[1000],qw[1000];
	scanf("%d",&n);
	while(n!=0)
	{
		for(iw=0;iw<n;iw++)
			scanf("%d",&tj[iw]);
		for(iw=0;iw<n;iw++)
			scanf("%d",&qw[iw]);
		qsort(tj,n,sizeof(int),mycomp);
		qsort(qw,n,sizeof(int),mycomp);
		iw=0;jw=0;re=0;ib=n-1;jb=n-1;
		while(iw<=ib)
		{
			if(tj[iw]>qw[jw])
			{
				re+=200;
				iw++;jw++;
			}
			else if(tj[iw]<qw[jw])
			{
				if(tj[iw]<qw[jb])
					re-=200;
				else if(tj[iw]>qw[jb])
					re+=200;
				iw++;jb--;
			}
			else if(tj[ib]>qw[jb])
			{
				re+=200;
				ib--;jb--;
			}
			else if(tj[ib]<qw[jb])
			{
				re-=200;
				iw++;jb--;
			}
			else
			{
				if(tj[iw]<qw[jb])
					re-=200;
				iw++;jb--;
			}
		}
		printf("%d\n",re);
        scanf("%d",&n);
	}
	return 0;
}