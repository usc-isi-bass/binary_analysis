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
 * fenjie.cpp
 *
 *  Created on: 2013-11-24
 *      Author: ??
 */
int num=0;
void fj(int m,int i){
	if(m==1)num++;
	else {
		for (int j=i;j<=m;j++){
			if(m%j==0)fj(m/j,j);
		}
	}
}
int main(){
	int n,m;cin>>n;
	for(int ii=0;ii<n;ii++){
		cin>>m;fj(m,2);
		cout<<num<<endl;
		num=0;
	}
	return 0;
}
