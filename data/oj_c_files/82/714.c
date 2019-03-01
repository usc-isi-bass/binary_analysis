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
	int n,i,e;
	int s=0;
	int a=0;
	scanf("%d",&n);
	int **sz=(int**)malloc(sizeof(int*)*n);
	int *sf=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		sz[i]=(int*)malloc(sizeof(int)*2);
		scanf("%d %d",&sz[i][0],&sz[i][1]);
	}
	for(i=0;i<n;i++)
	{
		if(i<n-1)
		{
				if(sz[i][0]>=90&&sz[i][0]<=140&&sz[i][1]>=60&&sz[i][1]<=90)
			{
				s++;
			}
			else
			{
				sf[a]=s;
				a++;
				s=0;
			}
		}
		if(i==n-1)
		{
				if(sz[i][0]>=90&&sz[i][0]<=140&&sz[i][1]>=60&&sz[i][1]<=90)
			{
				s++;
				sf[a]=s;
				a++;
			}
			else
			{
				sf[a]=s;
				a++;
			}
		}

	}
	
	for(i=0;i<a-1;i++)
	{
		if(sf[i]>sf[i+1])
		{
			e=sf[i];
			sf[i]=sf[i+1];
			sf[i+1]=e;
		}
	}
	printf("%d",sf[a-1]);
	return 0;
}