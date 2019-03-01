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
 * erchashudigui.cpp
 *
 *  Created on: 2010-11-26
 *      Author: 378073652
 */

int s=0;

int common(int x ,int y,int s){
	if(x==y) return x;
	if(x>y)  {s++;   return common(x/2,y,s);}
	if(x<y)   {      s++;   return common(x,y/2,s);}
}
int main(){
	int a,b;

	cin>>a>>b;
	cout<<common(a,b,s)<<endl;

 }
