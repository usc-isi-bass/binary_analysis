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
	int array[120][120];
	int row, col, i, j,sum;
	cin >> row >> col;
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			cin >> array[i][j];
	i = 0;
	j = 0;
	while (i < row && j < col) {
		cout << array[i][j] << endl;
		sum = i + j;
		i++;
		j--;
		if (i == row || j == -1) {
			sum = sum + 1;
			if (i = row) {
				i = 0;
				j = sum - i;
				if (j >= col) {
					j = col - 1;
					i = sum - j;
				}
			} else {
				j = col - 1;
				i = sum - j;
				if (i < 0) {
					i = 0;
					j = sum - i;
				}
			}
		}
	}
	return 0;
}
