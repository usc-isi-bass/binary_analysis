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
 *fenguozi.cpp
 *????????????
 *Created on: 2011-11-11
 *Author:???
 */
int main(){
	int a,n,i,b,k,t=1;
	cin>>n>>k;
	b=n+k;
	while(t==1){//????
		a=b;
		for(i=1;i<=n-1;i++){
			if(a%(n-1)!=0) i=n+1;
			else a=a*n/(n-1)+k;}
		if(i==n) {cout<<a;t=2;}
		b=b+n;
	}
	return 0;
}
