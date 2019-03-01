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

/*************
 * ???????
 * ???2010.10.12
 * ?????1000012923
**************/


int calc(int*,int,int);

int main(){
	int k,h[25],i=0;
	cin>>k;
	while(cin>>h[i]){
		i++;
		if(i==k)break;
	}
	cout<<calc(h,k,(1<<31-1));
}

int calc(int* h,int k,int limit){
	int i,ret=0,t=0;
	for(i=0;i<k;i++){
		if(h[i]>limit)continue;
		t=1+calc(h+i+1,k-i-1,h[i]);
		if(t>ret)ret=t;
	}
	return ret;
}
