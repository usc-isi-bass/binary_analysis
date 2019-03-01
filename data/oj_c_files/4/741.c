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
	int a[100][100] = { 0 };
	cin >> row >> col;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> *(*(a + i) + j);
		}
	}
	for (int s = 0; s < row + col - 1; s++) {//s???????
		for (int i = 0; i < row; i++) {//i???
			if (s - i >= 0 && s - i < col)
				cout << *(*(a + i) + s - i) << endl;
		}

	}
	return 0;
}
