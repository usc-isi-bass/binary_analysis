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
 * 1.cpp
 *
 *  Created on: 2011-12-25
 *      Author: Administrator
 */
int main()
{
	int i,j,m,n;
	int a[50][50];
	cin>>m>>n;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			if(a[i+1][j]>a[i][j]) continue;
			if(a[i][j+1]>a[i][j]) continue;
			if(i!=0 && a[i-1][j]>a[i][j])continue;
			if(j!=0 && a[i][j-1]>a[i][j])continue;
			cout<<i<<' '<<j<<endl;
		}
	return 0;
}