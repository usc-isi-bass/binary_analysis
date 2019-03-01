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
 * diag.cpp
 *
 *  Created on: 2013-12-6
 *      Author: ???1300012996
 */
int main(){
	int row,col;cin>>row>>col;
	int i;int a[10010],*p=a;
	for(i=0;i<row*col;i++){cin>>*p;p++;}
	p=a;
    for(int c=0;c<row+col;c++){
    	for(i=c;i>=0;i--){
    		if(i<col&&c-i<row){cout<<*(p+i+(c-i)*col)<<endl;}
    	}
    }
	return 0;
}
