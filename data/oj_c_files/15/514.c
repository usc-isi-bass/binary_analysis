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
    int n,i,j,a[1000][1000],count=0,wid=0,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++){
			if(a[i][j]==0)
			{
				count=count+1;
			}
		}
		if(count>2)
		{
			count=count;
			break;
		}
	}
for(j=0;j<n;j++)
	{
	for(i=0;i<n;i++){
			if(a[i][j]==0)
			{
				wid=wid+1;
			}
		}
		if(wid>2)
		{
			wid=wid;
			break;
		}
	}

    x=(count-2)*(wid-2);
	printf("%d",x);
	return 0;
}
