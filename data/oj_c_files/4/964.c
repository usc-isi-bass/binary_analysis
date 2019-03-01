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
 * bianli.cpp
 *
 *  Created on: 2012-12-14
 *      Author: dell
 */
int main() {
	int i,j,row,col,p[100][100];
	cin>>row>>col;//???p????
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cin>>p[i][j];
		}
	}//??p
	for(i=0;i<row+col-1;i++){
		for(j=0;j<i+1&&j<row;j++){
			if(i-j>=col)continue;
			cout<<*(*(p+j)+i-j)<<endl;
		}//??????????????????
	}
	return 0;
}//?????
