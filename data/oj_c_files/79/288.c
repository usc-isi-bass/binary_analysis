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

int Joseph(int n,int m)
{
	int l[300];
	int i,j;
	for(i=0;i<n-1;i++)
	{
		l[i] = i+1;
	}
	l[n-1] = 0;
	do
	{
		for(j=1;j<m;j++)
		{
			i = l[i];
		}
		l[i] = l[l[i]];
	}
	while(l[i] != i);
	return(i+1);
}
void main()
{
	int n,m;
	while(1)
	{
		scanf("%d %d",&n,&m);
		if(n==0 && m==0)
			break;
		printf("%d\n",Joseph(n,m));
	}
}