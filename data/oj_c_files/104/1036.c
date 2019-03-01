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
 * trees.cpp
 *
 *  Created on: 2012-11-17
 *      Author: Administrator
 */
int main()
{
	int x=0,y=0;
	cin>>x>>y;
	double row1=0,row2=0;
	row1=ceil(log2((double)(x+1)));
	row2=ceil(log2((double)(y+1)));
	while (row2>row1){
		y=y/2;
		row2=ceil(log2((double)(y+1)));
	}
	while (row1>row2){
			x=x/2;
			row1=ceil(log2((double)(x+1)));
		}
	while (x!=y){
		x=x/2;
		y=y/2;
	}
	cout <<x<<endl;
	return 0;
}
