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

int a[9][9]={0},b[9][9]={0};
void copy()
{
	for(int i=0;i<9;i++)
		for(int j=0;j<9;j++)
			a[i][j]=b[i][j];
}
void guil()
{
	for(int i=0;i<9;i++)
		for(int j=0;j<9;j++)
			b[i][j]=0;
}


int main()
{
	int m,n;
	cin>>m>>n;
	a[4][4]=m;
	for(int k=1;k<=n;k++)
	{
		guil();
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				if(a[i][j]!=0)
				{
					
						b[i][j]+=2*a[i][j];
						b[i][j-1]+=a[i][j];
						b[i][j+1]+=a[i][j];
						b[i-1][j-1]+=a[i][j];
						b[i-1][j]+=a[i][j];
						b[i-1][j+1]+=a[i][j];
						b[i+1][j-1]+=a[i][j];
						b[i+1][j]+=a[i][j];
						b[i+1][j+1]+=a[i][j];
					
				}
			}
		}
		copy();
	}

	for(int i=0;i<9;i++)
	{
		for(int j=0;j<8;j++)
			cout<<b[i][j]<<" ";
		cout<<a[i][8]<<endl;
	}
	return 0;
}