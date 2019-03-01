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
 *  Name:homework.cpp
 *  Created on: 2012-12-10
 *  Author: Meng Li
 *  Function:????
 */


int main(){                            //???
	int col, row, array[100][100];
	int i, j, temp1, temp2;
	cin >> row >> col;
	for (i=0;i<row;i++){
		for (j=0;j<col;j++){
			cin >> array[i][j];
		}
	}
	for (i=0;i<row+col-1;i++){
		temp1=(i-col+1>0)?(i-col+1):0;
		temp2=(i-row+1>0)?(row-1):i;
		for (j=temp1;j<=temp2;j++){
			cout << *(*(array+j)+i-j) << endl;
		}
	}
	return 0;
}
