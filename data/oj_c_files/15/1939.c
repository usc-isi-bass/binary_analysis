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
	int n,z[1000][1000],i,j,k,l,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&z[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(z[i][j]==0)
				break;

		}
		if(j<n)
				break;
	}
	k=i;
	l=j;
	for(i=n-1;i>=0;i--)
	{
		for(j=n-1;j>=0;j--)
		{
			if(z[i][j]==0)
				break;

		}
		if(j>=0)
				break;

	}
	k=i-k-1;
	l=j-l-1;
	s=k*l;
	printf("%d",s);
	return 0;
}
