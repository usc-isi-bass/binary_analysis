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
 *erchashu.cpp
 *?????????????
 *Created on: 2011-11-11
 *Author: ???
 */
int main(){
	int a,b;
	cin>>a>>b;
	while(a!=b){
		if(a>b) a=(a-a%2)/2;//??
		else b=(b-b%2)/2;
	}
	cout<<a<<endl;
	return 0;
}
