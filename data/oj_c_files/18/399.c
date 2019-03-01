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
 * ????????.
 *  ????: 2010-12-31
 *    ??????
 */
int juzhen[101][101];
int sum;
void xiaochu(int n) {
	if (n == 1);
	else {
		int minj[101];
		for (int i = 0; i < n; i++)
			minj[i] = 1000;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (juzhen[i][j] < minj[i])
					minj[i] = juzhen[i][j];
			}
			for (int j = 0; j < n; j++)
				juzhen[i][j] = juzhen[i][j] - minj[i];
		}
		for (int i = 0; i < n; i++)
			minj[i] = 1000;
		for (int j = 0; j < n; j++) {
			for (int i = 0; i < n; i++) {
				if (juzhen[i][j] < minj[j])
					minj[j] = juzhen[i][j];
			}
			for (int i = 0; i < n; i++)
				juzhen[i][j] = juzhen[i][j] - minj[j];
		}
		sum = sum + juzhen[1][1];
		for (int j = 1; j < n - 1; j++) {
			juzhen[0][j] = juzhen[0][j + 1];
			juzhen[j][0] = juzhen[j + 1][0];
		}
		for (int i = 1; i < n - 1; i++)
			for (int j = 1; j < n - 1; j++)
				juzhen[i][j] = juzhen[i + 1][j + 1];
		xiaochu(n - 1);
	}
}

int main() {
	int n;
	cin >> n;
	for (int z = 0; z < n; z++) {
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> juzhen[i][j];
		sum=0;
		xiaochu(n);
		cout << sum << endl;
	}
}