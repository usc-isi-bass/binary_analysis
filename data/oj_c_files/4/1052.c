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
	int row,col,a[100][100];
	cin>>row>>col;
	int num = 0;
	for(int i = 1;i<=row;i++)
	{
		for(int j = 1;j<=col;j++)
		{
			cin>>a[i-1][j-1];
		}
	}
	for(int k = 0;k<= row+col-2;k++)
	{
		for(int l =0;l<=row-1;l++)
		{
			if(k-l<=col-1&&k>=l)
			{
				cout<< a[l][k-l]<<endl;
			}
		}
	}
	return 0;
}
