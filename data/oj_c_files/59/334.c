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
	int i,j,k,m,p,num=0;
	char x[100][100]={0};
	int y[100][100];
	scanf("%d",&k);
	for(i=0;i<=k-1;i++)
	scanf("%s",x[i]);
	scanf("%d",&m);
	for(p=m;p>1;p--)
	{
		for(i=0;i<=k-1;i++)
		{
		     for(j=0;j<=k-1;j++)
			 y[i][j]=0;
		}

		if(x[0][0]=='@') 
		{
			if(x[0][1]=='.') y[0][1]=1;
			if(x[1][0]=='.') y[1][0]=1;
		}
		if(x[0][k-1]=='@') 
		{
			if(x[0][k-2]=='.') y[0][k-2]=1;
			if(x[1][k-1]=='.') y[1][k-1]=1;
		}
		for(i=1;i<=k-2;i++)
		{
			if(x[0][i]=='@')
			{
				if(x[0][i-1]=='.') y[0][i-1]=1;
				if(x[0][i+1]=='.') y[0][i+1]=1;
				if(x[1][i]=='.') y[1][i]=1;
			}
		}
		for(i=1;i<=k-2;i++)  //?
		{
			if(x[i][0]=='@')
			{
				if(x[i-1][0]=='.') y[i-1][0]=1;
				if(x[i+1][0]=='.') y[i+1][0]=1;
				if(x[i][1]=='.') y[i][1]=1;
			}
				if(x[i][k-1]=='@')
			{
				if(x[i-1][k-1]=='.') y[i-1][k-1]=1;
				if(x[i+1][k-1]=='.') y[i+1][k-1]=1;
				if(x[i][k-2]=='.') y[i][k-2]=1;
			}
				for(j=1;j<=k-2;j++)
				{
					if(x[i][j]=='@')
					{
						if(x[i-1][j]=='.') y[i-1][j]=1;
						if(x[i+1][j]=='.') y[i+1][j]=1;
						if(x[i][j-1]=='.') y[i][j-1]=1;
						if(x[i][j+1]=='.') y[i][j+1]=1;
					}
				}

		}
		if(x[k-1][0]=='@') 
		{
			if(x[k-1][1]=='.') y[k-1][1]=1;
			if(x[k-2][0]=='.') y[k-2][0]=1;
		}
		if(x[k-1][k-1]=='@') 
		{
			if(x[k-1][k-2]=='.') y[k-1][k-2]=1;
			if(x[k-2][k-1]=='.') y[k-2][k-1]=1;
		}
		for(i=1;i<=k-2;i++)
		{
			if(x[k-1][i]=='@')
			{
				if(x[k-1][i-1]=='.') y[k-1][i-1]=1;
				if(x[k-1][i+1]=='.') y[k-1][i+1]=1;
				if(x[k-2][i]=='.') y[k-2][i]=1;
			}
		}
		for(i=0;i<=k-1;i++)
		{
		    for(j=0;j<=k-1;j++)
			{
				if(y[i][j]==1) x[i][j]='@';
			}
		}
	}
	for(i=0;i<=k-1;i++)
	{
		for(j=0;j<=k-1;j++)
		{
			if(x[i][j]=='@')
				num++;
		}
	}
	printf("%d\n",num);
	return 0;
}