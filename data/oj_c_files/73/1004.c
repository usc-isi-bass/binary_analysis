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
	int a[5][5];
	int i,j,p,q,max,m,n,h,l;
	for(i=0;i<=4;i++)
	{
		scanf("%d %d %d %d %d",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4]);
	}
	n=0;
	for(p=0;p<=4;p++)
	{
		max=a[p][0];
		for(j=1;j<=4;j++)
		{
			if(max<=a[p][j])
			max=a[p][j];
		}
		for(j=0;j<=4;j++)
		{
			if(a[p][j]==max)
			break;
		}
		m=0;
		for(q=0;q<=4;q++)
		{
			if(a[p][j]<=a[q][j])
			m++;
		}
		if(m==5)
		{
			h=p+1;
			l=j+1;
			printf("%d %d %d\n",h,l,a[p][j]);
			n++;
		}
	}
	if(n==0)
	printf("not found\n");
	return 0;
}
