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
 *  Name?fenli.cpp
 *
 *  Created on: 2012-10-16
 *  Author: 00948343_??
 *  Function??????????
 */



int main(){
	int n, count, sum1=0, sum2=0, sum3=0;
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> count;
		for (int j=0;j<count;j++){
			if (j==0){
				sum1=1;
				sum2=1;
				sum3=1;
			}
			else if (j==1){
				sum1=1;
				sum2=1;
				sum3=1;
			}
			else{
				sum1=sum2;
				sum2=sum3;
				sum3=sum1+sum2;
			}
		}
		cout << sum3 <<'\n';
		sum3=0, sum1=0, sum2=0;
	}
}
