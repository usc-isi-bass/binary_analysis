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
 *  Name:JudgeCars.cpp
 *
 *  Created on: 2012-11-05
 *  Author: ??
 *  Function?????????
 */


int main()
{
	int N, count=0, i, j, temp;
	cin >> N;
	int shuru[N], shuchu[N];
	for (i=0;i<N;i++){
		cin >> shuru[i];
		if (shuru[i]%2==1){
			shuchu[count]=shuru[i];
			count++;
		}
	}
	for (i=0;i<count-1;i++){
		for (j=0;j<count-1-i;j++){
			if (shuchu[j]>shuchu[j+1]){
				temp=shuchu[j];
				shuchu[j]=shuchu[j+1];
				shuchu[j+1]=temp;
			}
		}
	}
	for (i=0;i<count;i++){
		if (i!=0)
			cout << ',';
		cout << shuchu[i];
	}
}
