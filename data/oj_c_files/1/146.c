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
 *      Author: hanzhe
 */


int min(int a,int b){   //????
	if(a>b)return b;
	else return a;
}
int f(int n,int s){ //???????s?n???????
	int k=0,i;
	if(n==1)return 1;
	else if(s==1)return 0;
	else if(s>n)return f(n,n);
	else {for(i=2;i<=s;i++)
		if(n%i==0)k=k+f(n/i,min(i,s));
	return k;
	}
}
int main(){ //????
	int n,m;
	cin>>n;
	while(n>0){
		cin>>m;
		cout<<f(m,m)<<endl;  //??
		n--;
	}
	return 0;
}  //????
