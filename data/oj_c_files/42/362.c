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
 * 1000012858_25.cpp
 *
 *  Created on: 2010-11-3
 *      Author: Administrator
 */
int main(){
	int n,i,num,k;                   //????n??????????num????????
	cin>>n;                          //??n
	k=0;                             //?k????n-1
	int a[n];                        //??????a[n]
	for(i=0;i<n;i++)                 //????????
		cin>>a[i];
	cin>>num;                        //??num??
	for(i=n-1;i>=0;i--){                //??????num????,??????
		if(a[i]==num){                 //???i???num???i??????
					for(;i<n-1-k;i++){
						a[i]=a[i+1];}
					k=k+1;            //??k??????????
	         }
			}
	        cout<<a[0];
	        for(i=1;i<=n-1-k;i++)
			cout<<' '<<a[i];
			return 0;
}