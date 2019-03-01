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
	int n,i,j,k,m;
	int left0,right0;
	int left1,right1;
	left0=-1;
	right0=-1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&k);
			if((k==0)&&(left0==-1)&&(right0==-1))
			{
                left0=i;
			    right0=j;
			}
			if(k==0)
			{
				left1=i;
				right1=j;
			}
		}
	}
	int t=0;
	if(((left1-left0)>1)&&((right1-right0)>1))
	{
		m=(left1-left0-1)*(right1-right0-1);
	    printf("%d\n",m);
	}
	else printf("%d\n",t);
	return 0;
}