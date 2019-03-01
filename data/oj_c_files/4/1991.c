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

int main()
{
	int m,n,zong,x,y,sum,i,zanshi;
	int *c,*d;
	scanf("%d %d",&m,&n);
	zong=m*n;
	d=(int*)malloc(zong*sizeof(int));
	c=d;
	for(;c<d+zong;c++)scanf("%d",c);
	for(sum=2;sum<=m+n;sum++)
	{
		for(y=1;y<sum;y++)
		{
			x=sum-y;
			zanshi=n*(y-1)+x;
			if(x<=n&&y<=m&&zanshi>=1&&zanshi<=zong)printf("%d\n",*(d+zanshi-1));
		}
		
	}
	
}