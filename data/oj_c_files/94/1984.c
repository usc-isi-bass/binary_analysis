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
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


int main() {
	int n;
	cin>>n;
	int a[n];                 
	for(int i=0;i<n;i++)
		cin>>a[i];
	int b[n];
	int m=0;
	for(int i=0;i<n;i++)     //?a[n]?????????b[n]
	{
		if(a[i]%2==1)
		{
			b[m]=a[i];
			m++;
		}
	}
	sort(b,b+m);              //?b[n]?????
	cout<<b[0];
	for(int i=1;i<m;i++)      //??b[n]
		cout<<","<<b[i];
	return 0;
}
