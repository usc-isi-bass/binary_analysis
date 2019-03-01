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
 * hehe.cpp
 *
 *  Created on: 2012-12-11
 *      Author:??
 *  ?????????????????????????8,6,5,4,1?????1,4,5,6,8?
 *
 */
int main(){
	int n,a[2000],*p,*q,temp;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	p=a;q=n+a-1;
	for(;p<q;p++,q--)
	{temp=*p;
	 *p=*q;
	 *q=temp;                        //??????????
	}
	cout<<a[0];
	for(int i=1;i<n;i++)
			cout<<" "<<a[i];
	return 0;
}
