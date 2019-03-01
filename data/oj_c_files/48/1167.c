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
	int a[15][15]={0};
	int m=0,n=0;
	cin>>m>>n;
	a[5][5]=m;
	for(int i=1;i<=n;i++)
	{
		int b[15][15]={0};
		for(int j=1;j<=9;j++)
		{
			for(int k=1;k<=9;k++)
			{
				if(a[j][k]!=0)
				{
					//int b[15][15]={0};
					for(int p=j-1;p<=j+1;p++)
					{
						for(int q=k-1;q<=k+1;q++)
						{
							b[p][q]+=a[j][k];
						}
					}
					b[j][k]+=a[j][k];
				}
			}
		}
		for(int j=1;j<=9;j++)
		{
			for(int k=1;k<=9;k++)
			{
				a[j][k]=b[j][k];
			}
		}
	}
	for(int i=1;i<=9;i++)
	{
		for(int k=1;k<=8;k++)
		{
			cout<<a[i][k]<<" ";
		}
		cout<<a[i][9]<<endl;
	}
	
	return 0;
}