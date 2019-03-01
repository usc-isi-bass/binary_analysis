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
    int n,m,i,j,k,sum=0;
	char a[100][100];
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
			cin>>a[i][j];
	cin>>m;
	for(k=1;k<m;k++)
	{
		for(i=1;i<n-1;i++)
		{
			for(j=1;j<n-1;j++)
			{
				if(a[i][j]=='@')
				{
					if(a[i-1][j]=='.') a[i-1][j]='*';
					if(a[i+1][j]=='.') a[i+1][j]='*';
					if(a[i][j-1]=='.') a[i][j-1]='*';
					if(a[i][j+1]=='.') a[i][j+1]='*';
				}
			}
		}
		for(j=1;j<n-1;j++)
	    {
			if(a[0][j]=='@') 
			{
			   if(a[0][j-1]=='.') a[0][j-1]='*';
			   if(a[0][j+1]=='.') a[0][j+1]='*';
			   if(a[1][j]=='.') a[1][j]='*';
		   }
           if(a[n-1][j]=='@') 
		   {
			   if(a[n-1][j-1]=='.') a[n-1][j-1]='*';
			   if(a[n-1][j+1]=='.') a[n-1][j+1]='*';
			   if(a[n-2][j]=='.') a[n-2][j]='*';
		   }
	   }
	   for(i=1;i<n-1;i++)
	   {
		   if(a[i][0]=='@') 
		   {
			   if(a[i-1][0]=='.') a[i-1][0]='*';
			   if(a[i+1][0]=='.') a[i+1][0]='*';
			   if(a[i][1]=='.') a[i][1]='*';
		   }
           if(a[i][n-1]=='@') 
		   {
			   if(a[i-1][n-1]=='.') a[i-1][n-1]='*';
			   if(a[i+1][n-1]=='.') a[i+1][n-1]='*';
			   if(a[i][n-2]=='.') a[i][n-2]='*';
		   }
	   }
	   if(a[0][0]=='@') 
	  {
			if(a[0][1]=='.') a[0][1]='*';
			if(a[1][0]=='.') a[1][0]='*';
	  }
	  if(a[0][n-1]=='@')
	  {
			if(a[0][n-2]=='.') a[0][n-2]='*';
			if(a[1][n-1]=='.') a[1][n-1]='*';
	  }
	  if(a[n-1][n-1]=='@')
	  {
			if(a[n-2][n-1]=='.') a[n-2][n-1]='*';
			if(a[n-1][n-2]=='.') a[n-1][n-2]='*';
	  }
	  if(a[n-1][0]=='@')
	  {
			if(a[n-2][0]=='.') a[n-2][0]='*';
			if(a[n-1][1]=='.') a[n-1][1]='*';
	  }
	  for(i=0;i<n;i++)
	  {
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='*')
					a[i][j]='@';
			}
	  }
	  
	}
	
	for(i=0;i<n;i++)
	{
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='@')
					sum++;
			}
	}
	cout<<sum;
	
	return 0;
}

	 
