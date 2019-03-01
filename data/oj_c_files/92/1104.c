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

int cmp(const void *p1,const void *p2)
{
	return *((int *)p2)-*((int *)p1);
}
int main()
{
	int a[1000],b[1000],la,ra,lb,rb,i,n,ans;
	while(scanf("%d",&n),n)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			scanf("%d",&b[i]);
		qsort(a,n,sizeof(int),cmp);
		qsort(b,n,sizeof(int),cmp);

		ans=0;lb=la=0;ra=rb=n-1;
		while(la<=ra)
		{
			if(a[la]>b[lb])ans=ans+200,la++,lb++;
			else if(a[ra]>b[rb])ans+=200,ra--,rb--;
			else
			{
				if(a[ra]<b[lb])ans-=200;
				ra--,lb++;
			}
		}
		printf("%d\n",ans);
	}
}