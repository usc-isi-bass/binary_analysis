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
	int n,i,j,t=255,x1=-1,y1=-1,x2=-1,y2=-1;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d",&t);
			if (t==0)
			{
				if (x1<0)
				{
					x1=i;
					y1=j;
				}								if (j>y2)
					y2=j;
				x2=i;
			}
		}
	}
	printf("%d\n",(x2-x1-1)*(y2-y1-1));
	return 0;
}

