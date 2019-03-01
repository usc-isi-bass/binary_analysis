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

int sushu(int p,int n)
{
	if(p>n/2)
	{
		return 1;
	}
	else if(n%p==0)
	{
		return 0;
	}
	else
	{
		return sushu(p+1,n);
	}
}
int huiwen(int n)
{
	int a[100],flag,i;
	for(i=0;n!=0;i++)
	{
		a[i]=n%10;
		n=n/10;
		flag=i;
	}
	for(i=0;i<=flag;i++)
	{
		if(a[i]!=a[flag-i])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int a,b,i,flag=0;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(huiwen(i)==1&&sushu(2,i)==1&&flag==0)
		{
			printf("%d",i);
			flag=1;
		}
		else if((huiwen(i)==1)&&(sushu(2,i)==1)&&(flag==1))
		{
			printf(",%d",i);
		}
	}
	if(flag==0)
	{
		printf("no");
	}
	return 0;
}


