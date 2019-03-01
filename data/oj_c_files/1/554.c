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

int sum=0;
int geshu(int a,int x)
{
	int y,z;
	z=a;
	y=(int)sqrt(a);
	while(x<=y)
	{
		if(a%x==0)
		{
			a=a/x;
			geshu(a,x);
		}
		if(a==z/x)
			a=z;
		x++;
	}
	sum++;
	return sum;
}
int main()
{
	int n,i,a[100],b[100],x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==2||a[i]==3)
			b[i]=1;
		else
		{
			sum=0;
			x=2;
			b[i]=geshu(a[i],x);
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}
}