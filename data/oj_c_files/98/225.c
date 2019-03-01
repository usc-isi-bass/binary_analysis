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
 * qm2.cpp
 *
 *  Created on: 2011-1-9
 *      Author: jsgl
 */
int main(){
	int n;
	cin>>n;
	char word[n][100];
	int i;
	for(i=0;i<n;i++){
		cin>>*(word+i);
	}
	int k,l=0;
	k=0;
	for(i=0;i<n;i++){
		k+=strlen(*(word+i))+1;
		if(k+strlen(*(word+i+1))>80){
			l++;
			cout<<*(word+i)<<endl;
			k=0;
		}
		else if(l==n-1)  cout<<*(word+i);
		else{
		cout<<*(word+i)<<" ";l++;}
	}
	return 0;
}
