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
 * ????ex509.cpp
 * ?????2012-11-2
 * ??????
 */
int main(){
	int n,i,j,num=0,x1=1000,y1=1000,x2=0,y2=0;
	cin>>n;
	const int N=n;
	int a[N][N];
	for(i=0;i<n;++i){
		for(j=0;j<n;++j){
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;++i){
		for(j=0;j<n;++j){
			if(a[i][j]==0){
				if(i<x1)x1=i;
				if(j<y1)y1=j;
				if(i>x2)x2=i;
				if(j>y2)y2=j;
			}
		}
	}
	num=(x2-x1-1)*(y2-y1-1);
	cout<<num;
	return 0;
}