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


int main() {
	int row, col;
	cin >> row >> col;
	int num[110][110] = {0};
	for(int i = 0 ; i < row; i++)
		for(int j = 0; j < col; j++) {
			cin >> *(*(num + i) + j);  // input part
		}
	for(int i = 0; i < col; i++) {  // begin from the first element of each line
		for(int j  = 0; j <= i; j++) {   // this part have j elements
			if(j < row) cout << *(*(num + j) + i - j) << endl;
			else break;
		}
	}
	for(int i = 1; i < row; i++)  {  // begin from the last element of each row
		for(int j = 0; j < row - i; j++) {
			if(j < col) cout << *(*(num + i + j) + col - j - 1) << endl;
		}
	}
	
	return 0;
}