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
	int a[6],i;
	int rvs(int x);
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++)
	{
		a[i]=rvs(a[i]);
		printf("%d\n",a[i]);
	}
}

int rvs(int x)
{
	int z[5],sign,j,y;
	if(x<0)sign=-1;
	else if(x==0)sign=0;
	else sign=1;
	x*=sign;//??x???
	for(j=4;j>=0;j--)
	{
		z[j]=x-x/10*10;//????
		x/=10;
	}
	y=sign*(10000*z[4]+1000*z[3]+100*z[2]+10*z[1]+z[0]);
	for(j=0;j<5;j++)
	{
		if(z[j]==0)y/=10;//?????0
		if(z[j]!=0)break;//??01230????2?10???????
	}
	return(y);
}
