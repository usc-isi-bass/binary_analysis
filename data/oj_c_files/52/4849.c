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
 * 00090.cpp
 *???11.1
 *  Created on: 2011-12-6
 *      Author:???
 */


int main()
{
	int n,m,i=0;
	cin>>n>>m;
	int a[n+m];
	for(i=0;i<n;i++)
		cin>>a[i];
	int *p1=a+n-1; int *p2=a+n+m-1;
	for(;p1>=a;p1--,p2--){
		*p2=*p1;
	}
	for(p1=a+n+m-1;p2>=a;p1--,p2--)
		*p2=*p1;
	for(p1=a;p1<a+n-1;p1++)
		cout<<*p1<<' ';
	cout<<*p1;
	return 0;
}