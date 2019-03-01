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
 * shuzujishu.cpp
 *
 *  Created on: 2012-11-9
 *      Author: alias
 */
int main() {
	int n;
	cin >> n;
	/*
	 * ??a[n],??????????b[n]
	 *
	 */
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int b[n], m = 0;
	for (int j = 0; j < n; j++) {
		if (a[j] % 2 != 0) {
			b[m] = a[j];
			m++;
		}
	}
	/*
	 * ??????b???m?????
	 */
	int temp,k;
	for(int p=0;p<m-1;p++){
		for(k=0;k<m-1-p;k++){
			if(b[k]>b[k+1]){
				temp=b[k];
				b[k]=b[k+1];
				b[k+1]=temp;
			}
		}
	}
	/*
	 * ??b???m?
	 */
	for (int q = 0; q < m; q++) {
		if (q == 0)
			cout << b[q];
		else
			cout << "," << b[q];
	}
}

