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
 * youshangzuoxiabianli.cpp
 *?????????? 
 *  Created on: 2012-12-11
 *      Author: ???
 */
int main(){
	int row,col,array[100][100];//????????????
	int i,j,k;
	cin >> row >> col;//????
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cin >> array[i][j];//????
		}
	}
	for(k=0;k<col;k++){//?????????????
		cout << array[0][k]<<endl;
		for(i=1,j=k-1;;i++,j--){
			if(i<row && j>=0)
			cout << array[i][j] << endl;
			else break;//???????
		}
	}
	for(k=1;k<row;k++){//??????????????????
		cout << array[k][col-1]<<endl;
		for(i=k+1,j=col-2;;i++,j--){
			if(i<row && j>=0)
			cout << array[i][j]<<endl;
			else break;
		}
	}
	return 0;
}
