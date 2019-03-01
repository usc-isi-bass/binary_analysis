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
 * hanshudigui2.cpp
 *
 *  Created on: 2010-11-24
 *      Author: hanzhe
 */


int f(int x,int y){       //??????????
	int g=0;              //g=1?????????
	for(int i=0;;i++){    //??????(x/2^n)=(y/2^m)
		for(int j=0;(y/pow(2.0,j))>=1;j++)
			if((int)(x/pow(2.0,i))==(int)(y/pow(2.0,j))){
				return x/pow(2.0,i);
				g=1;
				break;
			}
	if(g==1)break;
	}
}
int main(){
	int n1,n2;
	cin>>n1>>n2;
	cout<<f(n1,n2);
	return 0;
}                        //????
