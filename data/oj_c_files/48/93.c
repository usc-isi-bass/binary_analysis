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

//???1000010179
//????????
int x[9][9]={0};//???????
void peiyang()//????????
{
	int temp[9][9]={0},i,j;//temp??????????????????ij?????
	
	//???????temp[i][j]????x[i][j]????????x??
	temp[0][0]=x[0][0]*2+x[0][1]+x[1][0]+x[1][1];
	for (i=1;i<8;i++)
		temp[0][i]=x[0][i]*2+x[0][i-1]+x[0][i+1]+x[1][i-1]+x[1][i]+x[1][i+1];
	temp[0][8]=x[0][8]*2+x[0][7]+x[1][7]+x[1][8];

	for (i=1;i<8;i++)
	{
		temp[i][0]=x[i][0]*2+x[i-1][0]+x[i-1][1]+x[i][1]+x[i+1][0]+x[i+1][1];
		for (j=0;j<8;j++)
			temp[i][j]=x[i][j]*2+x[i-1][j-1]+x[i-1][j]+x[i-1][j+1]+x[i][j-1]+x[i][j+1]+x[i+1][j-1]+x[i+1][j]+x[i+1][j+1];
		temp[i][8]=x[i][8]*2+x[i-1][7]+x[i-1][8]+x[i][7]+x[i+1][7]+x[i+1][8];
	}

	temp[8][0]=x[8][0]*2+x[7][0]+x[7][1]+x[8][1];
	for (i=1;i<8;i++)
		temp[8][i]=x[8][i]*2+x[7][i-1]+x[7][i]+x[7][i+1]+x[8][i-1]+x[8][i+1];
	temp[8][8]=x[8][8]*2+x[7][7]+x[7][8]+x[8][7];

	for (i=0;i<9;i++)//?temp???x
		for (j=0;j<9;j++)
			x[i][j]=temp[i][j];
}
int main()
{
	int m,n;//mn???
	cin>>m>>n;
	x[4][4]=m;//???????m
	for (int k=0;k<n;k++)//??peiyang??n????n?????
		peiyang();
	for (int p=0;p<9;p++)//????
		for (int q=0;q<9;q++)
		{
			if (q==8) cout<<x[p][q]<<endl;
			else cout<<x[p][q]<<' ';
		}
	return 0;
}