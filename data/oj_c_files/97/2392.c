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
 * 2.cpp
 *
 *  Created on: 2011-11-6
 *      Author: b
 */
int main(){
	int n,r,m;
	cin>>n;
	r=n%100;
	m=(n-r)/100;
	cout<<m<<endl;
	n=r;
	r=n%50;
	m=(n-r)/50;
	cout<<m<<endl;
	n=r;
	r=n%20;
	m=(n-r)/20;
	cout<<m<<endl;
	n=r;
	r=n%10;
	m=(n-r)/10;
	cout<<m<<endl;
	n=r;
	r=n%5;
	m=(n-r)/5;
	cout<<m<<endl;
	n=r;
	r=n%1;
	m=(n-r)/1;
	cout<<m<<endl;
	return 0;
}
