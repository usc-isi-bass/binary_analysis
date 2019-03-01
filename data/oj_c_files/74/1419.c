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

int judge1(int n)
{
	int i,u=1;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			u=0;
			break;
		}
	}
	return u;
}
int judge2(int n)
{
	char s[10];
	int i,t,r,u=1;
	for(t=n,r=1;;r++)
	{
		t=t/10;
		if(t==0)
			break;
	}
	for(t=n,i=r-1;i>=0;i--)
	{
		s[i]=t%10+'0';
		t=t/10;
	}
	for(i=0;i<r-i-1;i++)
		if(s[i]!=s[r-i-1])
			u=0;
	return u;
}
void main()
{
	int m,n,i,u=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
		if(judge1(i)&&judge2(i))
		{
			printf("%d",i);
			u=1;
			break;
		}
	i=i+1;
	for(;i<=n;i++)
		if(judge1(i)&&judge2(i))
			printf(",%d",i);
	if(u==0)
		printf("no");
}