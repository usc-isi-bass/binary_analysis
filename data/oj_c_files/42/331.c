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
 * ???2010?11?1?
 * ?????
 * ???????????
 *
 */
int main() {
	int n,  k, i = 0, j, temp, a[100000];
	cin >> n;//??????
	for (i = 0; i < n; i++) {
		cin >>  a[i];//?????
	}
	cin >> k;//??????k?
	for (i = 0; i < n; i++) {
		if (a[i] == k) {
			for (j = i + 1; j < n; j++) {
				if (a[j] != k) {
					temp = a[j];
					a[j] = a[i];
					a[i] = temp;

					break;//??k??????????????k?????
				}
			}
		}
	}
	if (a[0]!=k) cout << a[0];//?????????????????k???
	for (i = 1; i < n; i++) {
		if (a[i] != k)
			cout << ' ' << a[i];//??????

	}
	return 0;
}
 

 
