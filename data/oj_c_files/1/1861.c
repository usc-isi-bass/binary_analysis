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
 * fengjie.cpp
 *
 *  Created on: 2013-11-23
 *      Author: sony
 */

int sum;

void f(int x,int i){
	if (x == 1) sum++;
	for(;i<=x;i++)
		if (x%i == 0) f(x/i,i);
	return;
}

int main(){
	int t,a,i=2;
	cin>>t;//????????
	for (a = 0; a<t ; a++){
		int x;
		cin >> x;
		int ans = 1;
		for(i = 2; i<sqrt(x) ; i++){
			sum = 0;
			if(x%i == 0) f(x/i,i);
			ans = ans + sum;
		}
		cout<<ans<<endl;
	}
	return 0;
}
