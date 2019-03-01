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

int a[9][9];
int b[9][9];
main()
{
	int m,n,i,j,k;
	scanf("%d %d",&m,&n);
	a[4][4]=m;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<9;j++)
			for(k=0;k<9;k++)
				b[j][k]=a[j][k];
		a[0][0]=2*b[0][0]+b[0][1]+b[1][0]+b[1][1];
		a[0][8]=2*b[0][8]+b[0][7]+b[1][8]+b[1][7];
		a[8][0]=2*b[8][0]+b[7][0]+b[8][1]+b[7][1];
		a[8][8]=2*b[8][8]+b[8][7]+b[7][8]+b[7][7];
		for(j=1;j<8;j++)
			a[0][j]=2*b[0][j]+b[0][j-1]+b[0][j+1]+b[1][j]+b[1][j-1]+b[1][j+1];
		for(j=1;j<8;j++)
			a[8][j]=2*b[8][j]+b[8][j-1]+b[8][j+1]+b[7][j]+b[7][j-1]+b[7][j+1];
		for(j=1;j<8;j++)
			a[j][0]=2*b[j][0]+b[j-1][0]+b[j+1][0]+b[j][1]+b[j-1][1]+b[j+1][1];
		for(j=1;j<8;j++)
			a[j][8]=2*b[j][8]+b[j-1][8]+b[j+1][8]+b[j][7]+b[j-1][7]+b[j+1][7];
		for(j=1;j<8;j++)
			for(k=1;k<8;k++)
				a[j][k]=2*b[j][k]+b[j-1][k]+b[j+1][k]+b[j][k-1]+b[j][k+1]+b[j-1][k-1]+b[j-1][k+1]+b[j+1][k-1]+b[j+1][k+1];
	}
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
		{
			if(j!=8)
				printf("%d ",a[i][j]);
			else
				printf("%d\n",a[i][j]);
		}
}
