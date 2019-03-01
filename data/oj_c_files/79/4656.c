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
	int n,m,i,j;
	int houwang(int n,int m);
	int y[100];
	for(i=0;i<100;i++)
	{
		scanf("%d%d",&n,&m);
		if(n==0&&m==0)
			break;
		else 
		    y[i]=houwang(n,m);	
	}
	for(j=0;j<i;j++)
		printf("%d\n",y[j]);
	return 0;
}

int houwang(int n,int m)
{
	int i,j=0,k=0;
	int x[301];
	for(i=0;i<301;i++)
		x[i]=1;
	for(i=0;;i++)
	{
		if(x[i]==1)
		{
			j++;
	     	if(j%m==0)
			{
			    x[i]=0;
			    k++;
			}
		}
		if(k==n-1)
			break;
		if(i==n-1)
			i=-1;
	}
	for(i=0;i<n;i++)
		if(x[i]==1)
			break;
	return(i+1);
}