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

void main()
{
	int m,n,i,k,t,j=0;
	int f1(i);
	int f2(i);
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		k=f1(i);
		t=f2(i);
		if(k==1&&t==1)
		{
			if(j==0)
			{
				printf("%d",i);
				j=j+1;
			}
			else
				printf(",%d",i);
		}
		
	}
	if(j==0)
			printf("no");
}

int f1(int i)
{
	int k,j;
	k=sqrt(i);
	for(j=2;j<=k;j++)
		if(i%j==0)
			break;
	if(j>=k+1)
		return 1;
	else
		return 0;
}
int f2(int i)
{
	int n,j,m,a,b,e;
	for(n=0;;n++)
		if(i<pow(10,n))
			break;
	m=(int)n/2;
	for(j=0;j<m;j++)
	{
		e=n-j-1;
		a=(int)(i/pow(10,j))-((int)(i/pow(10,j+1)))*10;
		b=(int)(i/pow(10,e))-((int)(i/pow(10,e+1)))*10;
		if(a!=b)
			break;
	}
	if(j>=m)
		return 1;
	else
		return 0;
}