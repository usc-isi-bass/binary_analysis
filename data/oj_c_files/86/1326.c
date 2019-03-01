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
	int n,x,y,z,i,j,w;
	int a[101][101];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i][0]);
		for(j=1;j<=a[i][0];j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=n;i++)
	{
		if(a[i][(a[i][0])]+a[i][0]*3<=60)
		{
			w=60-a[i][0]*3;
			printf("%d\n",w);
		}
		if((a[i][(a[i][0])]+a[i][0]*3>60)&&(a[i][(a[i][0]-1)]+(a[i][0]-1)*3<=60))
		{
			x=a[i][(a[i][0])]+a[i][0]*3-3;
			if(x<=60)y=x;
			if(x>60)y=60;
			w=y-(a[i][0]-1)*3;
			printf("%d\n",w);
		}
		if((a[i][(a[i][0]-1)]+(a[i][0]-1)*3>60)&&(a[i][(a[i][0]-2)]+(a[i][0]-2)*3<=60))
		{
			x=a[i][(a[i][0]-1)]+(a[i][0]-1)*3-3;
			if(x<=60)y=x;
			if(x>60)y=60;
			w=y-(a[i][0]-2)*3;
			printf("%d\n",w);
		}
}
}