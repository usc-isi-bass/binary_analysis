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
 * final_07.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 2011
 */



int sum[1000]={1};
int len=1;

void cheng(void){
	int i=0;
	for(i=0;i<len;i++)
		sum[i]=sum[i]*2;
	for(i=0;i<len-1;i++){
		if(sum[i]>=10){
			sum[i]=sum[i]-10;
			sum[i+1]++;
		}
	}
	if(sum[len-1]>=10){
		sum[i]=sum[i]-10;
		sum[i+1]++;
		len++;
	}
	return;
}

int main(){
	int n,i=0;
	cin>>n;
	for(i=0;i<n;i++)
		cheng();
	for(i=len-1;i>=0;i--)
	   cout<<sum[i];
	return 0;
}
