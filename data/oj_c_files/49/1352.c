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
 * huiwen_zichuan.cpp
 *
 *  Created on: 2014-1-4
 *      Author: ??
 */
int main(){
	char a[600];
	cin>>a;
	int n,i;int j;
	int l=strlen(a);
	for(n=2;n<=l;n++){
		for(i=0;i<l-1;i++){
			if(i+n-1>=l){break;}
			for(j=0;i+j<i+n-1-j;j++){
				if(a[i+j]!=a[i+n-1-j]){break;}
			}
			if(a[i+n-1-j]==a[i+j]&&(i+n-1-j)-(i+j)<3){
				for(int ii=i;ii<=i+n-1;ii++)cout<<a[ii];
				cout<<endl;
			}
		}
	}
	return 0;
}
