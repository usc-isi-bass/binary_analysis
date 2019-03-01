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
 * ???? .cpp
 *
 *  Created on: 2013-1-18
 *      Author: sony
 */
int main()
{
	int m,n,i,j,k,t=0;
	char a[110][110];
        char b[110][110];
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	cin>>m;
	for(k=1;k<m;k++)
        {
                for(i=0;i<n;i++)
			for(j=0;j<n;j++)
                            b[i][j] = '.';
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='@')
				{
					if((j>0) && (a[i][j-1]=='.'))b[i][j-1]='@';
					if((j<n-1) && (a[i][j+1]=='.'))b[i][j+1]='@';
					if((i>0) && (a[i-1][j]=='.'))b[i-1][j]='@';
					if((i<n-1) && (a[i+1][j]=='.'))b[i+1][j]='@';
				}
			}
                for(i=0;i<n;i++)
			for(j=0;j<n;j++)
                            if (b[i][j] == '@') a[i][j] = '@';
        }
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='@')t++;
		}
    cout<<t<<endl;
    return 0;

}