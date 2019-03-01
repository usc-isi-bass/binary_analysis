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

int pymbg[11][11]={0},pymed[11][11]={0};
void peiyang(int n)
{
	int i,j;
	if(n!=0)
	{
		for (i=1;i<10;i++)for(j=1;j<10;j++)
		{
			pymed[i][j]=pymed[i][j]+pymbg[i][j];
			pymed[i][j-1]=pymed[i][j-1]+pymbg[i][j];
			pymed[i][j+1]=pymed[i][j+1]+pymbg[i][j];
			pymed[i+1][j]=pymed[i+1][j]+pymbg[i][j];
			pymed[i+1][j-1]=pymed[i+1][j-1]+pymbg[i][j];
			pymed[i+1][j+1]=pymed[i+1][j+1]+pymbg[i][j];
			pymed[i-1][j]=pymed[i-1][j]+pymbg[i][j];
			pymed[i-1][j-1]=pymed[i-1][j-1]+pymbg[i][j];
			pymed[i-1][j+1]=pymed[i-1][j+1]+pymbg[i][j];
		}
		for (i=1;i<10;i++)for(j=1;j<10;j++) pymbg[i][j]=pymed[i][j];
		n--;
		peiyang(n);
	}
}
int main( )
{
	int m,n,i,j;
	cin>>m>>n;
	pymbg[5][5]=m;
	pymed[5][5]=m;
	peiyang(n);
	for (i=1;i<10;i++) 
	{
		for (j=1;j<9;j++) cout<<pymbg[i][j]<<' ';
		cout<<pymbg[i][9];
		cout<<'\n';
	}
	return 0;
}