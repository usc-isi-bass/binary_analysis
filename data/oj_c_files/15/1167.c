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
	int n,i,j,ai,aj,bi,bj,ans,x;

	

	scanf("%d",&n);
	ai=n; aj=n;
	bi=-1; bj=-1;
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
		{
			scanf("%d",&x);
			if (x==0)
			{
				if (i<ai) ai=i;
				if (i>bi) bi=i;
				if (j<aj) aj=j;
				if (j>bj) bj=j;
			}
		}

	ans=(bi-ai-1)*(bj-aj-1);
		
	printf("%d\n",ans);


	return 0;
}

