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
 * main.cpp
 *
 *  Created on: 2012-12-10
 *      Author: ??
 *     ????????????????????????????????????????????????????????????

 */


void function()
{
	int a[110][110],(*p)[110];
	int n,m,i,sum=0,j;
	cin>>n>>m;
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			cin>>a[i][j];
	p=a;
	for (i=0;i<m;i++)
	{
		sum+=*(*p+i);
		if (n>1) sum+=*(*(p+n-1)+i);
	}
	for (i=1;i<n-1;i++)
	{
		sum+=**(p+i);
		if (m>1) sum+=*(*(p+i)+m-1);
	}
	cout<<sum<<endl;
}
int main()
{
	int n,i;
	cin>>n;
	for (i=1;i<=n;i++)
		function();
	return 0;
}