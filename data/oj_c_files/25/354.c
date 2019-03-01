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
 * 3.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 2011
 */
void times2(char *a,int length){
	int i,carry=0;
	for(i=0;i<length;i++){
		a[i]=a[i]*2+carry-'0';
		if(a[i]>'9'){
			a[i]=a[i]-10;
			carry=1;
		}
		else carry=0;
	}
	if(carry==1){
		a[length]='1';
	}
}
int main(){
	int n,i,length;
	cin>>n;
	char answer[100]="1";
	for(i=1;i<=n;i++){
		length=strlen(answer);
		times2(answer,length);
	}
	length=strlen(answer);
	for(i=length-1;i>=0;i--){
		cout<<answer[i];
	}
	cout<<endl;
	return 0;
}
