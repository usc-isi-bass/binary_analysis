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
	int n,i,j,m,a[100][100],count=0,k;
	char b;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
	    	cin>>b;
     		if(b=='#')
			    a[i][j]=6;
			if(b=='.')
				a[i][j]=0;
			if(b=='@')
				a[i][j]=1;
		}
	}
	cin>>m;
	for(k=1;k<m;k++)
	{
		for(i=0;i<n;i++)
		{
	    	for(j=0;j<n;j++)
			{
		    	if(a[i][j]==1)
				{
					if(a[i-1][j]!=6)
					{
						if(a[i-1][j]==0)
							a[i-1][j]=2;
					}
					if(a[i+1][j]!=6)
					{
						if(a[i+1][j]==0)
						    a[i+1][j]=2;
					}
					if(a[i][j+1]!=6)
					{
						if(a[i][j+1]==0)
						    a[i][j+1]=2;
					}
					if(a[i][j-1]!=6)
					{
						if(a[i][j-1]==0)
							a[i][j-1]=2;
					}
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]==2)
					a[i][j]=1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
     	for(j=0;j<n;j++)
		{
	    	if(a[i][j]==1)
		     	count++;
		}
	}
	cout<<count;
	return 0;
}