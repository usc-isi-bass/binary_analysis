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
	int x1,y1,x2,y2;
	int a[101][101],b[101][101],c[101][101]={0};
	int i,j,k;

	cin>>x1>>y1;
	for(i=1;i<=x1;i++)
	{
		for(j=1;j<=y1;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>x2>>y2;
	for(i=1;i<=x2;i++)
	{
		for(j=1;j<=y2;j++)
		{
			cin>>b[i][j];
		}
	}
	//	cin>>x1>>y1;
	for(i=1;i<=x1;i++)
	{
		for(j=1;j<=y2;j++)
		{
			for(k=1;k<=x2;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	//	cin>>x1>>y1;
	for(i=1;i<=x1;i++)
	{
		for(j=1;j<=y2;j++)
		{
			cout<<c[i][j];
			if(j!=y2)
				cout<<" ";
		}
		cout<<endl;
	}
	//cin>>x1;
	return 0;
}