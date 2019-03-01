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
	int row, col, a[200][200];
	cin >> row >> col;
	for(int i = 0; i <row ; i ++)
		for(int j = 0; j < col; j ++)
			cin >> a[i][j];
	for(int i = 0; i <= row+col-2; i ++)
		for(int j = 0; j <= i && j < row && (i-j)<col; j ++)
			cout << *(a[j] + (i-j)) << endl;
	for(int k = col; k <= row + col -2; k ++)
		for(int q = col-1; q >= k-row+1&& q>=0;q --)
			cout << *(a[k-q] + q)<<endl;
	return 0;
}