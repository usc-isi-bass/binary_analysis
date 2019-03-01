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
 * T4.cpp
 *
 *  Created on: 2013-1-11
 *      Author: weiwan
 *      Function:????
 */

int main()
{
	int n,m;
	char r[110][110];
	int i,j,count = 0;//i,j??????count???????
	cin >>n;
	memset(r,'#',sizeof(r));//?????????
	for(i = 1;i <= n;i ++)//??????
		for(j = 1;j <= n;j ++)
			cin >>r[i][j];
	cin >>m;
	while(m > 1)//????
	{
		for(i = 1;i <= n;i ++){
			for(j = 1;j <= n;j ++)
			{
				if(r[i][j]=='@')//???????????
				{
					if(r[i-1][j]=='.')r[i-1][j]='*';//????????????????‘*’
					if(r[i+1][j]=='.')r[i+1][j]='*';
					if(r[i][j-1]=='.')r[i][j-1]='*';
					if(r[i][j+1]=='.')r[i][j+1]='*';
				}
			}
		}
		for(i = 1;i <= n;i ++){//???????‘*’??????
			for(j = 1;j <= n;j ++)
			{
				if(r[i][j]=='*')r[i][j]='@';
			}
		}
		m --;//??-1
	}
	for(i = 1;i <= n;i ++)//????????
		for(j = 1;j <= n;j ++)
			if(r[i][j]=='@')count ++;
	cout <<count <<endl;//??
	return 0;
}