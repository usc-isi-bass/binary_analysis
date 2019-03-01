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

//============================================================================
// Name        : shuzunixu.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


int main() {
	int n,middle=0;
	int a[101];
	int *p=NULL,*q=NULL;


	cin>>n;

		for(p=a;p<a+n;p++)
		cin>>*p;

	for(p=a,q=a+n-1;p<q;p++,q--)
	{ middle=*p;
	  *p=*q;
	  *q=middle;

	}
	for(p=a;p<a+n;p++)
		{if(p<a+n-1)cout<<*p<<' ';
		else cout<<*p;

		}

	return 0;
}
