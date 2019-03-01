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
 * erchasu.cpp
 *
 *  Created on: 2012-11-26
 *      Author: Justin
 */

int main(){
          int x,y;
	cin>>x>>y;
		while(x!=y){
		if(x>y){
			x=x/2;
		}
		else{y=y/2;}
	}
	cout<<x;
}