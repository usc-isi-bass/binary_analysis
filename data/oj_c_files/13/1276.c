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
 * homework1106.cpp
 *
 *  Created on: 2012-11-5
 *      Author: wangyinzhi
 */

int main(){
	int n,i,k;
     cin>>n;
	int a[n];
	for(i=0;i<=n-1;i++){
		cin>>a[i];//????
	}
	for(i=1;i<=n-1;i++){
	   for(k=0;k<=i-1;k++){
		   if(a[i]==a[k]){
			   a[i]=0;
			   break;//???????????????0
		   }
		   }
	   }

	for(i=0;i<=n-1;i++){
		if(a[i]!=0){
		if(i==0){
			cout<<a[i];
		}
		else cout<<" "<<a[i];//????0???????????
	}
	}

	return 0;
}