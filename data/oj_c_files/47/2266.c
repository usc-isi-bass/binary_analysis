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
 * shuzunixu.cpp
 *????
 *  Created on: 2012-12-11
 *      Author: ???
 */
int main(){
	int n,i,a[100];//?????????
	cin >> n;
	for(i=0;i<n;i++){//??
		cin >> a[i];
	}
	int *p=&a[n-1];//??????????????
	do
	{
		cout<< *p <<" ";
		p--;
	}while(p>a);
	cout << *a;//????
	return 0;
}