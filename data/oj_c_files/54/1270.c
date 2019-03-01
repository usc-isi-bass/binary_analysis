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
 * 81.cpp
 *
 *  Created on: 2012-11-23
 *      Author: 99013
 */


int main() {
	int i,j, n, k;
	cin >> n >> k;
	float min = n + k;
	float temp;
	int suc=1;
	for(i=1;;i++){
		min=i*n+k;
		for(j=1;j<n;j++){
			temp=1-(float)1/n;
			suc=1;
			if((int)min%(n-1)==0){
				min=min/temp+k;
			}
			else if((int)min%(n-1)!=0){
				suc=0;
				j=n;
			}
		}
		if(suc==1){
		break;
		}
	}
cout<<(int)min;


	return 0;
}