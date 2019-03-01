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
 * zhizheng.cpp
 *?? - ????
 *  Created on: 2012-12-11
 *      Author: ???
 */
int n,N,temp,i;
int *p=NULL,*q=NULL;
int main(){
	cin>>n;
	const int N=n;
	int a[N];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(p=a,q=a+n-1;p<q;p++,q--)
	{
		temp=*p;
		*p=*q;
		*q=temp;
	}
	for(p=a;p<a+n-1;p++)
		cout<<*p<<' ';
	cout<<*p<<endl;
	return 0;
}