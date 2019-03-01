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
 * 1000062703.cpp
 *
 *  Created on: 2010-11-12
 *      Author: Administrator
 */
int cha(int a,int b){
	if(a>b)
		return(cha(a/2,b));
	if(a<b)
		return(cha(a,b/2));
	if(a==b)
		return a;
}
int main(){
	int x,y;
	cin>>x>>y;
	cout<<cha(x,y)<<endl;
	return 0;
}
