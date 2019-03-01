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

int fenjie(int n,int min)
{int i,a=0,x=0;
for(i=2;i<=n;i++)
if(n%i==0)
a=a+1;
	if(n==1)
	return 1;
	else
	{
		for(i=min;i<=n;i++)
		{
			if(n%i==0)
			x=x+fenjie(n/i,i);
		}
		return x;
	}
}
main()
{
	int t,j,num;
	scanf("%d",&t);
	for(j=1;j<=t;j++)
	{
		scanf("%d",&num);
		printf("%d\n",fenjie(num,2));}
}