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
	int n,i,m,j,k=0,a,b,c,winnum=0,win=2,year;
	char old[150][100]={0},id[100][100]={0},id0[100]={0},huiche[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d",&id0,&year);
		if(year>=60)
		{
			if(old[year][0]==0)
			{
				strcpy(old[year],id0);
			}
			else
			{
				huiche[0]=13;
				huiche[1]=0;
				strcat(old[year],huiche);
				strcat(old[year],id0);
			}
		}
		else
		{
			strcpy(id[i],id0);
		}
	}
	for(i=149;i>=0;i--)
	{
		if(old[i][0]!=0)
		{
			printf("%s\n",old[i]);
		}
	}
	for(i=0;i<n;i++)
	{
		if(id[i]!=0)
		{
			printf("%s\n",id[i]);
		}
	}
	return 0;
}