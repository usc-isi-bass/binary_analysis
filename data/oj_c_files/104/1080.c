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


int count(int b,int c)
{
	if (c==1) return 1;
	long k,i,sum=0;
	double t=c;
	for (i=b;i<=c;i++)
       if (c%i==0)
		   sum+=(count(i,c/i));
    return sum;
}

void main()
{ 
	int n,m,p[2000]={0},sum=0,tmp;
	scanf("%d%d",&n,&m);
	if (n>m)
	{
		tmp=n;
		n=m;
		m=tmp;
	}
	do
	{
		p[n]=1;
		n=n/2;
	} while (n>0);
	do
	{
		if (p[m]) 
		{
			printf("%d",m);
			return;
		}
		m=m/2;
	} while (m>0);
}