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
	int sushu(int);
	int huiwen(int);
    int m,n,i,b[10000],p,q,r=0,j=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		p=sushu(i);
		q=huiwen(i);
		if(p==1&&q==1)
		{b[j]=i;j++;r=1;}
	}
	if(r==0)
		printf("no");
	else if(j==1)
	printf("%d",b[0]);
	else if(j>1)
	{printf("%d",b[0]);
	for(i=1;i<j;i++)
		printf(",%d",b[i]);
		}

}
int sushu(int m)
{
	int i,p=1;
	for(i=2;i<=sqrt(m);i++)
	{
		if(m%i==0)
		{p=0;break;}
	}
		return(p);
}
int huiwen(int m)
{
	int i=0,j,p=1,a[100],r,d=0,t;
	t=m;
		while((d=m/pow(10,i))!=0)i++;
			i--;
		for(r=0;r<=i;r++)
		{
			a[r]=t/pow(10,i-r);
			t=t-a[r]*pow(10,i-r);
		}r--;
		for(j=0;j<r/2+1;j++)
		{
			if(a[j]!=a[r-j])
			{p=0;break;}
		}
		return(p);
}



	
		

