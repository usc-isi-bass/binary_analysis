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
 * 115.cpp
 * ????????????????????????
 *  Created on: 2012-11-20
 *      Author: Salforever
 */



int x[10000],y[10000],z[100000];
int m,n,i,j,temp;
void dq()
{
	cin >> m >> n;													//??
	for (i=1;i<=m;i++)
		cin >> x[i];
	for (i=1;i<=n;i++)
		cin >> y[i];
}

void px()
{
	for (i=1;i<=m-1;i++)											//??
		for (j=m;j>=i+1;j--)
			if (x[j]<=x[j-1]) {temp=x[j];x[j]=x[j-1];x[j-1]=temp;}
	for (i=1;i<=n-1;i++)
		for (j=n;j>=i+1;j--)
			if (y[j]<=y[j-1]) {temp=y[j];y[j]=y[j-1];y[j-1]=temp;}
}

void hb()
{
	for (i=1;i<=m;i++)												//??
		z[i]=x[i];
	for (i=1;i<=n;i++)
		z[i+m]=y[i];
}

void xs()
{
	for (i=1;i<m+n;i++)												//??
		cout << z[i] << ' ';
	cout << z[m+n];
	cout << endl;
}

int main()
{
	dq();															//??
	px();															//??
	hb();															//??
	xs();															//??
	return 0;														//????
}
