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
	int a[100][100],i,j,n,m,flag[100][100]={0},k=0,l=0,num=0,sign=1;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	while(num<m*n)
	{
		cout<<a[k][l]<<endl;
		flag[k][l]=1;
		num++;
		if(sign==1)
		{
			if(l!=m-1&&flag[k][l+1]==0)
			{
				l++;
			}
			else
			{
				sign=2;
				k++;
				continue;
			}
		}
		if(sign==2)
		{
			if(k!=n-1&&flag[k+1][l]==0)
			{
				k++;
			}
			else
			{
				sign=3;
				l--;
				continue;
			}
		}
		if(sign==3)
		{
			if(l!=0&&flag[k][l-1]==0)
			{
				l--;
			}
			else
			{
				sign=4;
				k--;
				continue;
			}
		}
		if(sign==4)
		{
			if(m!=0&&flag[k-1][l]==0)
			{
				k--;
			}
			else
			{
				sign=1;
				l++;
				continue;
			}
		}
	}
	return 0;
}