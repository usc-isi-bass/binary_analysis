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
 * jiaogucaixiang.cpp
 *
 *  Created on: 2012-11-20
 *      Author: AK
 */
int jiaogu(int a){                      //??????
	if(a==1) {cout<<"End"<<endl;return 0;}   //?????1??return 0????
	else if(a%2==1) {cout<<a<<"*3+1="<<3*a+1<<endl;return jiaogu(3*a+1);}//???????????????
	else {cout<<a<<"/2="<<a/2<<endl;return(jiaogu(a/2));}//???????????????
	return 0;//??
}
int main(){
	int a,b;
	cin>>a;
	b=jiaogu(a);
	return 0;
}
