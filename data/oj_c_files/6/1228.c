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
 * caledge.cpp
 *
 *  Created on: 2011-12-30
 *      Author: wangshiheng
 */
int main()
{
	int k,m,n,i,j,s=0,a[102][102];
	cin>>k;
	while (k>0)
	{
		s=0;
		cin>>m>>n;
		for (i=1;i<=m;i++)
		  for (j=1;j<=n;j++)
			  cin>>a[i][j];
		for (i=1;i<=m;i++)
		{
			s=s+a[i][1]+a[i][n];
		}
		for (j=2;j<=n-1;j++)
		{
			s=s+a[1][j]+a[m][j];
		}
		cout<<s<<endl;
		k--;
	}
}
