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

main()
{
	int n,i,cur,s=0,sq,starow,stacol,endrow,endcol;
	scanf("%d",&n);
	for (i=1;i<=n*n;i++)
	{
		scanf("%d",&cur);
		if (s==0&&cur==0)
		{
			s=1;
			starow=(i-1)/n;
			stacol=i%n;
		}
		else if (s==1&&cur==0)
		{
			endrow=(i-1)/n;
			endcol=i%n;
		}
	}
	sq=(endrow-starow-1)*(endcol-stacol-1);
	printf("%d\n",sq);
	return 0;
}