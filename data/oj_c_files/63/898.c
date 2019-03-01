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

/********************************************************************
	file base:	main
	file ext:	cpp
	author:		cromwell
	
	purpose:	matrix multiplication
*********************************************************************/


int main()
{
	int x[2],y[2];
	int Matrix[2][100][100],answer[100][100];
	//input
	for (int i=1;i<=2;i++)
	{
		cin>>x[i-1]>>y[i-1];
		for (int j=1;j<=x[i-1];j++)
		{
			for (int k=1;k<=y[i-1];k++)
			{
				cin>>Matrix[i-1][j-1][k-1];
			}
		}

	}
	//multiply

	for (int row=1;row<=x[0];row++)
	{
		for (int column=1;column<=y[1];column++)
		{
			answer[row-1][column-1]=0;

			for (int i=1;i<=y[0];i++)			
				answer[row-1][column-1]+=Matrix[0][row-1][i-1]*Matrix[1][i-1][column-1];

			if (column==y[1])
				cout<<answer[row-1][column-1];
			else
				cout<<answer[row-1][column-1]<<' ';
		}
		cout<<endl;
	}

	return 0;

};