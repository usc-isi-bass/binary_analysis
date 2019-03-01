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

int n;
void main()
{
	int k,i,q=0,m;
	scanf("%d%d",&n,&k);
	int f(int x,int y);
	m=k+1;
	for(;n!=2;)
	{
		if(m==1)
		{
			q=1;
			break;
		}
		else
		{
			if(m%(n-1)!=0)
				break;
			if(m%(n-1)==0)
				m=m/n-1;
		}
	}
	if(n==2)
		printf("%d\n",(k+1)*f(n,n)-k*(n-1));
	else
	{
	if(q==0)
		printf("%d\n",f(n,n)-k*(n-1));
	else
		printf("%d\n",m*f(n,n)-k*(n-1));
	}
}
int f(int x,int y)
{
	int i,s=1;
	for(i=1;i<=y;i++)
		s=x*s;
	return s;
}