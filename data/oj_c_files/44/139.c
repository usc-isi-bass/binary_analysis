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

int fanxu(int x)
{
	int sum=0,i,f[10],a=10,p,q;
	for(i=0;i<10;i++)
	{
		f[i]=(x%a)/(a/10);
		x=x-(a/10)*f[i];
		if(x==0)
		{
			break;
		}
		a*=10;
	}
	q=1;
	for(p=0;p<=i;p++)
	{
		sum+=f[i-p]*q;
		q*=10;
	}
	return sum;
}
int main()
{
	int i,k[6],shu;
	for(i=0;i<6;i++)
	{
		scanf("%d",&shu);
		if(shu==0)
		{
			k[i]=0;
		}
		if(shu<0)
		{
			k[i]=-1*fanxu(abs(shu));
		}
		else
		{
			k[i]=fanxu(shu);
		}
	}
	for(i=0;i<6;i++)
	{
		printf("%d\n",k[i]);
	}
	return 0;
}
