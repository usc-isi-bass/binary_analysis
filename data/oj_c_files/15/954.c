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
	int n;
	int area[1000][1000];
	scanf("%d",&n);
	int f=1;
	int start1,start2,end1,end2,re;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&area[i][j]);
			if(area[i][j]==0 && f==1)
			{
				start1=i;
				start2=j;
				f=2;
			}
			if(area[i][j]==0)
			{
				end1=i;
				end2=j;
			}
		}
	}
	re=(end1-start1-1)*(end2-start2-1);
	printf("%d",re);
	return 0;
}

