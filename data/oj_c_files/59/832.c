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

//******************************************
//????
//??????
int main()//?????
{
	char h[101][101];//???? 
    int n,m;
	int i=0,j=0,k=0,t=0;
	cin>>n;
	for(i=0;i<n;i++)//??
		for(j=0;j<n;j++)
			cin>>h[i][j];
	cin>>m;
	while(m>1)//??m-1?
	{
		if(h[0][0]=='@')//??????
		{
			if(h[0][1]=='.')
				h[0][1]='!';
			if(h[1][0]=='.')
				h[1][0]='!';
		}
		if(h[n-1][n-1]=='@')
		{
			if(h[n-2][n-1]=='.')
				h[n-2][n-1]='!';
			if(h[n-1][n-2]=='.')
				h[n-1][n-2]='!';
		}
		if(h[n-1][0]=='@')
		{
			if(h[n-2][0]=='.')
				h[n-2][0]='!';
			if(h[n-1][1]=='.')
				h[n-1][1]='!';
		}
		if(h[0][n-1]=='@')
		{
			if(h[0][n-2]=='.')
				h[0][n-2]='!';
			if(h[1][n-1]=='.')
				h[1][n-1]='!';
		}
		for(j=1;j<n-1;j++)//??????
		{
			if(h[0][j]=='@')
			{
				if(h[1][j]=='.')
					h[1][j]='!';
				if(h[0][j-1]=='.')
					h[0][j-1]='!';
				if(h[0][j+1]=='.')
					h[0][j+1]='!';
			}
			if(h[n-1][j]=='@')
			{
				if(h[n-2][j]=='.')
					h[n-2][j]='!';
				if(h[n-1][j-1]=='.')
					h[n-1][j-1]='!';
				if(h[n-1][j+1]=='.')
					h[n-1][j+1]='!';
			}
		}
		for(i=1;i<n-1;i++)
		{
			if(h[i][0]=='@')
			{
				if(h[i][1]=='.')
					h[i][1]='!';
				if(h[i-1][0]=='.')
					h[i-1][0]='!';
				if(h[i+1][0]=='.')
					h[i+1][0]='!';
			}
			if(h[i][n-1]=='@')
			{
				if(h[i][n-2]=='.')
					h[i][n-2]='!';
				if(h[i-1][n-1]=='.')
					h[i-1][n-1]='!';
				if(h[i+1][n-1]=='.')
					h[i+1][n-1]='!';
			}
		}
		for(i=1;i<n-1;i++)//????
			for(j=1;j<n-1;j++)
			{
				if(h[i][j]=='@')
				{
					if(h[i][j+1]=='.')
						h[i][j+1]='!';
					if(h[i][j-1]=='.')
						h[i][j-1]='!';
					if(h[i+1][j]=='.')
						h[i+1][j]='!';
					if(h[i-1][j]=='.')
						h[i-1][j]='!';
				}
			}
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				if(h[i][j]=='!')
					h[i][j]='@';
			}
		m--;
	}
	for(i=0;i<n;i++)//??????
		for(j=0;j<n;j++)
		{
			if(h[i][j]=='@')
				t++;
		}
	cout<<t;
	return 0;//?????
}