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

void top(int m,int n,int a[21][21])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(((i>0&&a[i][j]>=a[i-1][j])||i==0)&&((i<m-1&&a[i][j]>=a[i+1][j])||i==m-1)&&((j>0&&a[i][j]>=a[i][j-1])||j==0)&&((j<n-1&&a[i][j]>=a[i][j+1])||j==n-1))
				cout<<i<<" "<<j<<endl;
		}
	}
}
int main()
{
	int m,n,num[21][21]={0};
	int i,j;
	cin>>m>>n;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>num[i][j];
	top(m,n,num);
	return 0;
}
