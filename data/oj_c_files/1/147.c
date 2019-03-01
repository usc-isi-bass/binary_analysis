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
 * 1.cpp
 *
 *  Created on: 2010-12-1
 *      Author: ???
 *        ??? ????
 */



int g(int x,int j){
	for(j++;j<=x;j++){
		if(x==j)
			return 1;
		if(x%j==0&&x/j>=j)
			return g(x/j,j-1)+g(x,j);
	}
	return 0;
}

int main(){
	int n,a;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		cout<<g(a,1)<<endl;
	}
	return 0;
}