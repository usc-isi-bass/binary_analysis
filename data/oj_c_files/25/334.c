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
 * exam.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 2011
 */
int main(){
	int result[10000]={1};
	int length=1,n,i,k;
	cin>>n;
	for (k=0;k<=n-1;k++){
	for (i=0;i<=length-1;i++){
		result[i]=result[i]*2;
	}
	for (i=0;i<=length-1;i++){
		result[i+1]=result[i+1]+result[i]/10;
		result[i]=result[i]%10;
	}
	if (result[i])length++;
}
	for (i=length-1;i>=0;i--)cout<<result[i];
	return 0;
}
