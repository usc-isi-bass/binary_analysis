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
	int i,j,n,k,year[200],month1[200],month2[200],month[12]={31,28,31,30,31,30,31,31,30,31,30,31},day[200];
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d%d\n",&year[i-1],&month1[i-1],&month2[i-1]);
		//scanf("\n");
	}
	for(i=1;i<=n;i++)
	{
		day[i-1]=0;
		if(month1[i-1]>month2[i-1])
		{
			k=month1[i-1];
			month1[i-1]=month2[i-1];
			month2[i-1]=k;
		}

		for(j=month1[i-1];j<month2[i-1];j++)
		{
			day[i-1]+=month[j-1];
		}
		/*for(j=1;j<=month1[i-1]-1;j++)
		{
			day[i-1]-=month[j-1];
		}*/
		if(((year[i-1]%4==0&&year[i-1]%100!=0)||year[i-1]%400==0)&&month1[i-1]<3&&month2[i-1]>=3)
		{
			day[i-1]++;
		}
		if(day[i-1]%7==0)
			printf("YES\n");
			else printf("NO\n");
	}
	return 0;
}

