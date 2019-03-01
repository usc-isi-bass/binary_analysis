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
	int i,m,n,j;
	float sl[1000],add[1000];
	scanf("%d",&m);
	for(j=0;j<m;j++)
	{
		scanf("%d",&n);
		sl[0]=1;
		sl[1]=2;
		add[j]=0;
		for(i=0;i<n;i++)
		{
			add[j]=sl[i+1]/sl[i]+add[j];
			sl[i+2]=sl[i]+sl[i+1];
		}
	}
	for(j=0;j<m;j++)
	{
		printf("%.3f\n",add[j]);
	}
	return 0;
}
