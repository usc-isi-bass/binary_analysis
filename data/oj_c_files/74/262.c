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
	int su(int x);
	int hui(int x);
	int m,n,i=0,x;
	scanf("%d %d",&m,&n);
	for(x=m;x<=n;x++)
		if(su(x)&&hui(x))
		{
			if(i!=0) printf(",");
			printf("%d",x);
			i++;
		}
		if(!i) printf("no");
}
int su(int x)
{
	int i,c=1;
	for(i=2;i<=sqrt(x);i++)
		if(x%i==0)
		{c=0;break;}
		if(c) return 1;
		else return 0;
}
int hui(int x)
{
	int a[100],t,i,k,c=1;
	t=log10(x);k=t;
	for(i=0;i<=t;i++)
	{
		a[i]=x/pow(10,k);
		x-=a[i]*pow(10,k);
		k--;
	}
	for(i=0;i<=t;i++)
		if(a[i]!=a[t-i])
		{c=0;break;}
				if(c) return 1;
		else return 0;
}