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
	int row, col, i, k, j, s = 0;
	int a[100][100] = { 0 };
	cin >> row >> col;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++)
			cin >> a[i][j];
	}
	for (i = 0; i < row / 2 + 1 && i < col / 2 + 1; i++) {//????-1
		for (k = i; k < col - i; k++) {//???i?????
			cout << a[i][k] <<endl;
			s++;
		}
		if (s == row * col)//??????
			break;
		for (k = i + 1; k < row - i; k++) {//???i?????
			cout << a[k][col - i - 1] << endl;
			s++;
		}
		if (s == row * col)
			break;
		for (k = col - i - 2; k >= i; k--) {//???i?????
			cout << a[row - i - 1][k] << endl;
			s++;

		}
		if (s == row * col)
			break;
		for (k = row - i - 2; k > i; k--) {//???i????
			cout << a[k][i] << endl;
			s++;

		}
		if (s == row * col)
			break;

	}

	return 0;
}