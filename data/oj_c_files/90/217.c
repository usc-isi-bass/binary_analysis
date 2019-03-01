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
 * 4.cpp
 *
 *  Created on: 2010-11-30
 *      Author: ???
 *        ??? ???
 */



int k(int m,int n){
	if(n==1)
		return 1;
	if(m>=n)
		return k(m-n,n)+k(m,n-1);
	else
		return k(m,n-1);
}

int main(){
	int m,n,zu;
	cin>>zu;
	for(int i=1;i<=zu;i++){
	    cin>>m>>n;
	    cout<<k(m,n)<<endl;
	}
	return 0;
}