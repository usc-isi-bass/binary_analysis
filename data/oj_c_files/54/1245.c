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
 * 1112.cpp
 *
 *  Created on: 2012-11-11
 *      Author: wangyinzhi
 */



int main(){
	int n,k,i,m;
	cin>>n>>k;
	int apple[n+2];
	apple[1]=n+k;
	while(true){
	for(i=2;i<=n+1;i++){
	apple[i]=(apple[i-1]-k)*(n-1)/n;//????
	if((apple[i]%n!=k)||((apple[i]-k)/n==0))//????????????
		break;
	}
	if(i==n+1) break;
	else apple[1]=apple[1]+n;
	}
	m=apple[1]*n/(n-1)+k;//?????????????
	cout<<apple[1]<<endl;//??m
	return 0;
}