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

int now[9][9]={0},add[9][9]={0};
void getadd()
{
	for(int i=0;i<9;i++) for(int j=0;j<9;j++) add[i][j]=0;
	for(int i=1;i<8;i++)
	{
		for(int j=1;j<8;j++)
		{
			add[i-1][j-1]+=now[i][j];
			add[i][j-1]+=now[i][j];
			add[i+1][j-1]+=now[i][j];
			add[i-1][j+1]+=now[i][j];
			add[i][j+1]+=now[i][j];
			add[i+1][j+1]+=now[i][j];
			add[i+1][j]+=now[i][j];
			add[i-1][j]+=now[i][j];


		}
	}
}
int main()
{
	int m,n;
	cin>>m>>n;now[4][4]=m;
	for(int k=0;k<n;k++)
	{
		getadd();
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				now[i][j]=2*now[i][j]+add[i][j];
			}
		}

	}

	for(int i=0;i<9;i++)
	{
		if(i) cout<<endl;
		for(int j=0;j<9;j++)
		{
			if(j) cout<<" ";
			cout<<now[i][j];
		}
	}
	

}