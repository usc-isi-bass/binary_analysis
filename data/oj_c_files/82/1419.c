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

int x[100],y[100];
int main()
{
	int n,i,j,hour,maxhour;
	hour=0;
	maxhour=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d %d\n",&x[i-1],&y[j-1]);
			if(x[i-1]>=90&&x[i-1]<=140&&y[j-1]>=60&&y[j-1]<=90)
			{
			hour++;
			}else{
				if(maxhour<hour)
				{maxhour=hour;
			}hour=0;
			}
		}
	}
	if(maxhour<hour)
	{maxhour=hour;
	}
	printf("%d",maxhour); 
return 0;
} 