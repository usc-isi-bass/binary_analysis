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
 * 1000010227_30-3.cpp
 *
 *  Created on: 2010-11-7
 *      Author: hanzhe
 */


int main(){
	int k;
	char a[100],b[100];  //??????
	cin.getline(a,100);
	cin.getline(b,100);
	int i;
	for(i=0;i<=99;i++){
		if(a[i]>'Z') //a[i]?????????
			a[i]=a[i]-32;
		if(b[i]>'Z')
			b[i]=b[i]-32;
	}
	k=strcmp(a,b);
	if(k>0) cout<<">";
	if(k<0) cout<<"<";
	if(k==0) cout<<"=";
	return 0;
}                   //????
