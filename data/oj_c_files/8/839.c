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
 * XII7.cpp
 *
 *  Created on: 2012-11-23
 *      Author:???
 *       ??????????????????????????
 */
int a[100];
void ranking(int n,int m){//??????????n?m??????
	int i,j,p;
	for(i=n;i<m;i++)
		cin>>a[i];
	for(i=0;i<m-1;i++)
		for(j=n;j<m-1-i;j++)
		{if(a[j]>a[j+1]){
			p=a[j];
			a[j]=a[j+1];
			a[j+1]=p;
		}//?????
		}
}
int main() {
	int n,m,i;
	cin>>n>>m;
	ranking(0,n);
	ranking(n,n+m);//????????
	cout<<a[0];
	for(i=1;i<m+n;i++)
		cout<<" "<<a[i];
}
