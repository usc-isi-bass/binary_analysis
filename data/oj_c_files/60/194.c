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
	int n,i,j,y=0,m,a[10000],t,k=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		t=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0) t++;
		}
		if(t==0)
		{
			m=i;
			a[y]=m;
			y=y+1;
		}
	}
	if(y!=0)
	{
		k=0;
	while(k<y)
	{
		if(a[k+1]-a[k]==2) printf("%d %d\n",a[k],a[k+1]);
		k++;
	}
	}
	if(y==0||n<=4) printf("empty\n");
}
