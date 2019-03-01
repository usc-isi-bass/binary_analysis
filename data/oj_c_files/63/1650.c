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

int main(){
	int x1, y1;
	cin >> x1 >> y1;
	int a[101][101];
	for ( int i = 1; i <= x1; i ++) {
		for ( int j = 1; j <= y1; j ++) {
			cin >> a[i][j];
		}
	}
	int x2, y2;
	cin >> x2 >> y2;
	int b[101][101];
	for ( int i = 1; i <= x2; i ++) {
		for ( int j = 1; j <= y2; j ++) {
			cin >> b[i][j];
		}
	}
	int c[101][101];
	for ( int i = 1; i <= x1; i ++) {
		for ( int j = 1; j <= y2; j ++) {
			c[i][j] = 0;
			for ( int k = 1; k <= y1; k ++) {
				c[i][j] += a[i][k] * b[k][j];
			}
			if ( j == y2) cout << c[i][j] << endl;
			else cout << c[i][j] << " ";
		}
	}
	return 0;
}