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
	int sz1[1000];
	int sz2[1000];
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&sz1[i]);
	}
	for(int j=0;j<n;j++)
	{
		if(j<m)
		{
			sz2[j]=sz1[n-m+j];
		}
		else if(j>=m)
		{
			sz2[j]=sz1[j-m];
		}
	}
	for(int k=0;k<n-1;k++)
	{
		printf("%d ",sz2[k]);
	}
printf("%d",sz2[n-1]);
	return 0;
}