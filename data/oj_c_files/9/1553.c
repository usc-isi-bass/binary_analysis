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

struct oldpeople
{
	char id[20];
	int year;
}old[100],old60[100],cache;
int main()
{
	int n;int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",old[i].id,&old[i].year);
	}
	int j=0;
	for(i=0;i<n;i++)
	{
		if(old[i].year>=60)
		{	old60[j]=old[i];j++;}
	}
	int k;
	for(i=0;i<j;i++)
	{
		for(k=0;k<j-i;k++)
		{
			if(old60[k].year<old60[k+1].year)
			{
				cache=old60[k+1];
				old60[k+1]=old60[k];
				old60[k]=cache;
			}
		}
	}
	for(i=0;i<j;i++)
	{
		printf("%s\n",old60[i].id);
	}
	for(i=0;i<n;i++)
	{
		if(old[i].year<60)
		printf("%s\n",old[i].id);
	}
	return 0;
}
