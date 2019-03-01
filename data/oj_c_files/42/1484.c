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
 * homework1105.cpp
 *
 *  Created on: 2012-11-5
 *      Author: wangyinzhi
 */


int main(){
	int n,i,a[100001],k,c;//????
	cin>>n;
	for (i=0;i<=n-1;i++){
		cin>>a[i];//?????????
	}
	cin>>k;
	c=0;
	for(i=0;i<=n-1;i++){
		if(k!=a[i]){
		    c=c+1;
		    if(c==1)
			cout<<a[i];
		else cout<<" "<<a[i];}//???????k????

	}
	return 0;
}
