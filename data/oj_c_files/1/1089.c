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
 * seperateThenumber.cpp
 *
 *  Created on: 2012-11-13
 *      Author: AK
 */
int sum=1;                                    //??????sum  ??f???sum?????
void f(int begin,int m){                       //??f??
	int i;
	for(i=begin;i<=m;i++){                     //?i???????????
		if(m%i==0&&m/i>=i){sum++;f(i,m/i);}    //?????????????????   ????????????
		if(i>m/i) break;                       //?????????????break
	}
}
int main(){
	int n,j,m;
	cin>>n;                         //????????n
	for(j=1;j<=n;j++){               //???????
		cin>>m;
		f(2,m);
		cout<<sum<<endl;                 //??sum?
		sum=1;           //??sum=1
	}
	return 0;
}
