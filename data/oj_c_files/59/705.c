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
	int n,m,m1,i,j,k;
	char a[100][100];
	int b[100][100],sum[100],c[100][100];
	for(i=0;i<100;i++)
	{
		sum[i]=0;
	}
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			{
				cin>>a[i][j];
		        if(a[i][j]=='.')
				{
					b[i][j]=1;
				}
				if(a[i][j]=='#')
				{
					b[i][j]=0;
				}
				if(a[i][j]=='@')
				{
					b[i][j]=-1;
				}
		}
	}
	cin>>m1;
	m=m1;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				if(b[j][k]==0)
				{continue;}
				else
				{
					if(b[j-1][k]==-1||b[j+1][k]==-1||b[j][k-1]==-1||b[j][k+1]==-1)
					{
						c[j][k]=-1;
					}
				}
			}
		}
		
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				                   
				if(b[j][k]==-1)
					sum[i]=sum[i]+1;
				               
			}
		}
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				
				if(c[j][k]==-1)
				{
					b[j][k]=-1;
				}
			}
		}
	}
	cout<<sum[m-1];
}
		



	
