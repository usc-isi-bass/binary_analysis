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
	char zfc[200][200];
	char zfc1[200][200];
	int n,m,sum=0;
	scanf("%d",&n);
	int i,k;
	for(i=1;i<=n;i++)
	{
		scanf("%s",zfc[i]);
	}
	for(i=1;i<=n;i++)
	{			
		strcpy(zfc1[i],zfc[i]);
	}
	scanf("%d",&m);
	m--;
	while(m)
	{
		for(i=1;i<=n;i++)
		{
			k=0;
			if((zfc[i][1]=='@'||zfc[i-1][0]=='@'||zfc[i+1][0]=='@')&&zfc[i][0]=='.')
			{
				zfc1[i][0]='@';
			}
			for(k=1;k<n;k++)
			{
				if((zfc[i][k+1]=='@'||zfc[i][k-1]=='@'||zfc[i-1][k]=='@'||zfc[i+1][k]=='@')&&zfc[i][k]=='.')
				{
					zfc1[i][k]='@';
				}
			}
		}
		for(i=1;i<=n;i++)
		{
			strcpy(zfc[i],zfc1[i]);
		}
		m--;
	}
	for(i=1;i<=n;i++)
	{
		for(k=0;k<n;k++)
		{
			if(zfc[i][k]=='@')
			{
				sum++;
			}
		}
	}
	printf("%d",sum);
	return 0;
}
