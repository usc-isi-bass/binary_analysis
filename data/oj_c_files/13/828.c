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
 * 87.cpp
 *
 *  Created on: 2011-10-19
 *      Author: think
 */
int main(){//?????
	int n,p=1,i=0,j=0;//??????
	cin>>n;//????????
	int a[n];//????
	for(i=0;i<n;i++){//????
		cin>>a[i];
	}
	int b[n];//????????
	b[0]=a[0];//????
	for(i=1;i<n;i++){//????
		for(j=0;j<i;j++){//?????????????
			if(a[j]==a[i]){
				break;
			}}
			if(j==i){//???????bn??
				b[p]=a[i];
				p++;
			}

	}

	cout<<b[0];//????

	for(i=1;i<p;i++){//????
		cout<<" "<<b[i];
	}
	return 0;
}//?????

