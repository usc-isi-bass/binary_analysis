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
 * assignment.cpp
 *
 *  Created on: 2010-11-23
 *      Author: ??
 *      ???
 */


//???????
int sort(int x,int y){
	//????????
	if(x<y)return sort(x,x);
	if(x==2)return 2;
	if(y==2)return x/2+1;
	if(x==1||y==1)return 1;
	if(x==0||y==0)return 1;
	return sort(x,y-1)+sort(x-y,y);//???????????????????????
}
//???
int main() {
	int num;
	cin>>num;
	int m,n;
	for(int i=0;i<num;i++){
		cin>>m>>n;
		cout<<sort(m,n)<<endl;
	}
	return 0;
}
