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
	int row,col,i,j;
	cin>>row>>col;
	int a[row+2][col+2];
	for(i=0;i<row+2;i++)	{		for(j=0;j<col+2;j++)		{			a[i][j]=0;		}	}
	//memset(a,0,sizeof(a));
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			cin>>a[i][j];
		}
	}
	i=1;j=1;
	while(1)
	{
		if(a[i][j+1]!=0&&a[i][j-1]==0&&a[i-1][j]==0)
		{
			cout<<a[i][j]<<endl;
			
			a[i][j]=0;
			j++;
			continue;
		}
		if(a[i+1][j]!=0&&a[i-1][j]==0&&a[i][j+1]==0)
		{
			cout<<a[i][j]<<endl;
			
			a[i][j]=0;i++;continue;
		}
		if(a[i][j-1]!=0&&a[i][j+1]==0&&a[i+1][j]==0)
		{
			cout<<a[i][j]<<endl;
			
			a[i][j]=0;j--;continue;
		}
		if(a[i-1][j]!=0&&a[i+1][j]==0&&a[i][j-1]==0)
		{
			cout<<a[i][j]<<endl;
			
			a[i][j]=0;i--;continue;
		}
		else
{cout<<a[i][j]<<endl;
		break;}
	}
	return 0;
}
