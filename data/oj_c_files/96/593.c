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
	int sz1[200],sz2[200],i,t,n,carry=0;
	char zfc[200]={0};
	scanf("%s",zfc);
	for(i=0;zfc[i]!=0;i++)
	{
		sz1[i]=zfc[i]-'0';
	}
    n=i;
	for(i=0;i<n;i++)
	{
        sz2[i]=(sz1[i]+carry)/13;
		t=(sz1[i]+carry)%13;
		carry=10*t;
	}
	for(i=0;i<n;i++)
	{
		if(sz2[i]!=0)
		{
			for(t=i;t<n;t++)
			{
				printf("%d",sz2[t]);
			}
			break;
		}
	}
	if(i==n)
	{
		printf("0");
	}
	printf("\n");
	printf("%d",carry/10);
	return 0;
}
