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
	int m,n,i,j,d;
	int a[10][10]={0};
	int b[10][10]={0};
	cin >>m>>n;//??
	a[5][5]=m;//???
	for (d=1;d<=n;d++)//????
	{
		memset(b,0,100*sizeof(int));//???
		for (i=1;i<=9;i++)
			for (j=1;j<=9;j++)
			{
				if (a[i][j]==0) continue;
				b[i][j]+=a[i][j]*2;
				b[i+1][j]+=a[i][j];
				b[i-1][j]+=a[i][j];
				b[i][j+1]+=a[i][j];
				b[i][j-1]+=a[i][j];
				b[i+1][j+1]+=a[i][j];
				b[i+1][j-1]+=a[i][j];
				b[i-1][j+1]+=a[i][j];
				b[i-1][j-1]+=a[i][j];
			}//??????9??????
		memset(a,0,100*sizeof(int));
	    for (i=1;i<=9;i++)
			for (j=1;j<=9;j++)
				a[i][j]=b[i][j];//?b??a?????????
	}
	for (i=1;i<=9;i++)
	{
		for (j=1;j<9;j++)
			cout <<a[i][j]<<' ';
		cout <<a[i][9]<<endl;
	}//??
	return 0;
}