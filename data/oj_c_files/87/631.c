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
	int a[100][6],i,t,sum=0,time;
	for(i=0;i<100;i++)
	{
		for(t=0;t<6;t++)
		{
        	scanf("%d",&a[i][t]);
		}
		if(a[i][0]==0&&a[i][1]==0&&a[i][2]==0&&a[i][3]==0&&a[i][4]==0&&a[i][5]==0)
			break;
		sum++;
	}
    	for(i=0;i<sum;i++)
	{
	   time=(a[i][3]+12-a[i][0]-1)*3600+a[i][4]*60+a[i][5]+(3600-a[i][1]*60-a[i][2]);
     	printf("%d\n",time);
		}


return 0;
}