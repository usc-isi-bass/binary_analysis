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

int f(int x,int y)
{
	int z;
	if((x>=0&&x<5)&&(y>=0&&y<5))
		z=1;
	else
		z=0;
	return(z);
}

void main()
{
	int a[5][5],m,n,i,j,t;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		scanf("%d",&a[i][j]);
	}
	scanf("%d%d",&n,&m);
	t=f(n,m);
	if(t==0)
		printf("error");
	if(t==1)
	{for(i=0;i<5;i++)
		{t=a[n][i];
		a[n][i]=a[m][i];
		a[m][i]=t;}
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
			printf("%d ",a[i][j]);
			printf("%d",a[i][4]);
			printf("\n");
	}}
}