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
 * reverse.cpp
 *
 *  Created on: 2012-10-26
 *      Author: 12001
 */



int main()
{
	int n;
	int a[100];
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> a[i];
	}
	for (int i=0;i<n/2;i++){
		int tmp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=tmp;
	}
	for (int i=0;i<n;i++){
		cout << a[i];
		if (i==n-1)
			cout << endl;
		else
			cout << ' ';
	}
	return 0;
}
