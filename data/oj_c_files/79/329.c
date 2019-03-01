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

int num,a[301],b[1000];
void P(int m,int n)
{
	int i,k,j;
	for (i=1;i<=n;i++)
		a[i]=i;
	k=0;
	i=1;
	j=0;
	while (k<n-1)
	{
		if (a[i]!=0) 
			j++;
		if (j==m)
		{
			a[i]=0;
			j=0;
			k++;
		}
		i++;
		if (i==n+1)
			i=1;
	}	
	for (i=1;i<=n;i++)
		if (a[i]!=0)
			b[num]=i;
};	

void main()
{
	int i,m,n;
	for (num=0;;num++)
	{
		scanf("%d %d",&n,&m);
		if (m==0 && n==0)
			break;
		else
			P(m,n);
	}
	for (i=0;i<num;i++)
		printf("%d\n",b[i]);
}