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

int a[11][11];
int temp[11][11];
void f(int x,int y)
{
	int v = a[x][y];
	for(int i = -1;i<=1;i++){
		for(int j = -1;j<=1;j++){
			if(i==0&&j==0) temp[x+i][y+j]+=v*2;
			else temp[x+i][y+j]+=v;
			}
		}
	return;
}
int main()
{
	int m,n;
	cin>>m>>n;
	memset(a,0,sizeof(a));
	a[5][5]=m;
	for(int k=0;k<n;k++)
	{
		memset(temp,0,sizeof(temp));
		for(int i=1;i<=9;i++)
		{
			for(int j=1;j<=9;j++)
			{
				if(a[i][j]>0) f(i,j);	
			}	
		}
		for(int i=1;i<=9;i++)
		{
			for(int j=1;j<=9;j++)
			{
				a[i][j]=temp[i][j];	
			}	
		}	
	}
		for(int i=1;i<=9;i++)
		{
			for(int j=1;j<=8;j++)
			{
				cout<<a[i][j]<<" ";	
			}	
			cout<<a[i][9]<<endl;
		}
		return 0;
}
