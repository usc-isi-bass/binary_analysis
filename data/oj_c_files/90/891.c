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
 * 183.cpp
 *
 *  Created on: 2011-11-20
 *      Author: think
 */
int way1(int m,int n);
int way2(int m,int n);
int way(int m,int n){//????????
	return way1(m,n)+way2(m,n);
}
int way1(int m,int n){//????????????
	int r;
	r=m%n;
	if(n==1)return 1;//??
	if(m==0||m<n)return 0;//??
	if(m==n)return 1;//??
	return way(m-n,n);//??
}
int way2(int m,int n){//??????????
	if(n==1)return 0;//??
	else return way(m,n-1);//??
}
int main(){//?????
	int k,i;
	cin>>k;//??????
	int a[k+1];
	int b[k+1];
	for(i=1;i<=k;i++){
		cin>>a[i]>>b[i];//????
	}
	for(i=1;i<=k;i++){
		cout<<way(a[i],b[i])<<endl;//????
	}
	return 0;
}//?????
