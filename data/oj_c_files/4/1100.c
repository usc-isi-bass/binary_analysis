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

/*
 * youshang-zuoxia-bianli.cpp
 *
 *  Created on: 2013-12-6
 *      Author: Administrator
 */
int main()
{
	int x,y;
	int row,col;
	cin>>row>>col;
	int a[row][col];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
	}
	int n;
	n=row+col-2;
	for(int i=0;i<col;i++)
	{
		for(x=0,y=i-x; x>=0 && y>=0 && x<row && y<col ; x++,y--)
		{

			cout<<a[x][y]<<endl;
		}
	}
	for(int j=col;j<=n;j++)
	{
		for(y=col-1,x=j-y; x>=0 && y>=0 && x<row && y<col ; y--,x++)
		{
			cout<<a[x][y]<<endl;
		}
	}
	return 0;
}
