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
 * 1.cpp
 *
 *  Created on: 2011-11-15
 *      Author: Sun
 */
int main(){
	int n,i,j,b,k;//n????b??????k?????
	cin>>n>>k;//??n?k
	b=n+k;//b????
	while(i<n-1){j=b;//??b????????
		for(i=0;i<n;i++){
			if((n*j)%(n-1)!=0)break;//????????????
			else j=n*j/(n-1)+k;}//????
		if(i==n-1){//?????
			cout<<j<<endl;break;
		}b=b+n;//???????b??n
	                          }
	return 0;

}
