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
 * ?????????.cpp
 * Created on: 2010-11-28
 * Author: ???
 */
int main(){
	int n,k,i;
	cin>>n>>k;  //????n?????????k
	const int num=n+1;
	int apple[num];  //???????????apple
	apple[n]=n+k;  //??????????????
	while(true){
		for(i=n-1;i>0;i--){
			if(apple[i+1]%(n-1)!=0)break;
			apple[i]=apple[i+1]*n/(n-1)+k;  //????
			if(apple[i]%n!=k)break;
		}  //??????????
		if(i==0)break;
		apple[n]+=n;
	}
	cout<<apple[1]<<endl;  //??????
	return 0;
}
