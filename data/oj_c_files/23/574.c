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
 * 12.11.10d.cpp
 *  Created on: 2012-11-10
 *  Author: ???
 *  ???????
 */
int main(){
	int i,j,k,blen;
	char a[100][100],b[10000];
	cin.getline(b,10000);
	blen=strlen(b);
	for(i=0,j=0,k=0;i<blen;++i){
		if(b[i]==' '){
			++j;k=0;continue;
		}
		else{
			a[j][k]=b[i];
			++k;
		}
	}
	cout<<a[j];
	for(i=j-1;i>=0;--i){
		cout<<' '<<a[i];
	}
	return 0;
}