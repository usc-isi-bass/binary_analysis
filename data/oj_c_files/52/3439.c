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
 * zhizhen2.cpp
 *
 *  Created on: 2010-12-8
 *      Author: l
 */
int main(){
	int n,i,t,c;
	cin>>n>>t;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];//??
	int *b=NULL;//????
b=a;
for(int j=1;j<=t;j++){//????????????????????????
c=a[n-1];
for(i=n-1;i>0;i--)
	*(b+i)=a[i-1];//????
*b=c;}//?????????

	for(i=0;i<n-1;i++)
		cout<<a[i]<<" ";
	cout<<a[n-1]<<endl;//????

	return 0;
}
