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

/*
 * fx06.cpp
 *
 *  Created on: 2013-1-12
 *      Author: SONY
 */
int main()
{
	int n,m,i,j,c=0;
	cin>>n;
	char a[n][n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
while(m>1)
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='@')
			{
				if(a[i+1][j]=='.' && i+1<n) a[i+1][j]='*';
				if(a[i-1][j]=='.' && i-1>=0) a[i-1][j]='*';
				if(a[i][j+1]=='.' && j+1<n) a[i][j+1]='*';
				if(a[i][j-1]=='.' && j-1>=0) a[i][j-1]='*';
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='*') a[i][j]='@';
		}
	}
	m--;
}
for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='@') c++;
		}
	}
cout<<c;
return 0;
}