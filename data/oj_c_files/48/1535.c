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


int main(int argc, char* argv[])
{
	int A[9][9]={0},B[9][9]={0};
	int i,j,n,k;
	scanf ("%d%d",&(A[4][4]),&n);
	for (k=0;k<n;k++)
	{
	for (i=1;i<8;i++)
	{
		for (j=1;j<8;j++)
		{
			B[i][j]=2*A[i][j]+A[i-1][j-1]+A[i-1][j]+A[i-1][j+1]+A[i][j-1]+A[i][j+1]+A[i+1][j-1]+A[i+1][j]+A[i+1][j+1];
		}
	}

	for (j=1;j<8;j++)
	{
		B[0][j]=2*A[0][j]+A[0][j-1]+A[0][j+1]+A[1][j]+A[1][j+1]+A[1][j-1];
	}
	
    for (j=1;j<8;j++)
	{
		B[8][j]=2*A[8][j]+A[8][j-1]+A[8][j+1]+A[7][j]+A[7][j+1]+A[7][j-1];
	}
	for (j=1;j<8;j++)
	{
		B[j][0]=2*A[j][0]+A[j-1][0]+A[j-1][1]+A[j][1]+A[j+1][0]+A[j+1][1];
	}
	for (j=1;j<8;j++)
	{
		B[j][8]=2*A[j][8]+A[j-1][8]+A[j-1][7]+A[j][7]+A[j+1][7]+A[j+1][8];
	}
    B[8][8]=2*A[8][8]+A[8][7]+A[7][8]+A[7][7];
	B[0][8]=2*A[0][8]+A[0][7]+A[1][8]+A[1][7];
	B[8][0]=2*A[8][0]+A[8][1]+A[7][0]+A[7][1];
	B[0][0]=2*A[0][0]+A[0][1]+A[1][0]+A[1][1];
    for (i=0;i<9;i++)
	{
		for (j=0;j<9;j++)
		{
			A[i][j]=B[i][j];
		}
	}
	}
	for (i=0;i<9;i++)
	{
		for(j=0;j<8;j++)
		{
			printf ("%d ",A[i][j]);
		}   printf ("%d\n",A[i][8]);
	}
	return 0;
}
