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
 * move.cpp
 *
 *  Created on: 2011-1-8
 *      Author: Administrator
 */
int main(){
	int *p = NULL,*q = NULL;
	int n,m,i;
	cin>>n>>m;
	int a[n];
	for(i=0;i<n;i++)  cin>>a[i];
	p=a;
	q=a+n;
	for(i=0;i<n-m;i++){
		*(q+i)=*(p+i);
	}
	p=a+n-m;
	for(i=0;i<n-1;i++){
		cout<<*(p++)<<" ";
	}
	cout<<*p<<endl;
	return 0;
}

