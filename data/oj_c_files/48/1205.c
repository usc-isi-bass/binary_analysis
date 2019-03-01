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
	int i,j,m,n,k;
	scanf("%d%d",&m,&n);
	int xj[50][9]={0};
	xj[4][4]=m;
	for(k=1;k<=n;k++)
	{
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				xj[i+k*9][j]+=xj[i+(k-1)*9][j]*2;
				xj[i-1+k*9][j-1]+=xj[i+(k-1)*9][j];
				xj[i-1+k*9][j]+=xj[i+(k-1)*9][j];
				xj[i-1+k*9][j+1]+=xj[i+(k-1)*9][j];
				xj[i+k*9][j-1]+=xj[i+(k-1)*9][j];
				xj[i+k*9][j+1]+=xj[i+(k-1)*9][j];
				xj[i+1+k*9][j-1]+=xj[i+(k-1)*9][j];
				xj[i+1+k*9][j]+=xj[i+(k-1)*9][j];
				xj[i+1+k*9][j+1]+=xj[i+(k-1)*9][j];
			}
		}
	}
	for(i=0;i<9;i++)
	{
		printf("%d %d %d %d %d %d %d %d %d\n",xj[i+9*n][0],xj[i+9*n][1],xj[i+9*n][2],xj[i+9*n][3],xj[i+9*n][4],xj[i+9*n][5],xj[i+9*n][6],xj[i+9*n][7],xj[i+9*n][8]);
	}
	return 0;
}
