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

void main()
{
	int sz[100],n,max1,max2,i;
		scanf("%d",&n);
		max1=sz[0];
		max2=sz[1];
		for(i=0;i<n;i++)
		{
			scanf("%d",&sz[i]);
			if(max1<sz[i])
			{	
				max2=max1;
				max1=sz[i];
			}
			else if(max1>sz[i]&&max2<sz[i])
			{
				max2=sz[i];
			}
		}
		printf("%d\n%d",max1,max2);
}