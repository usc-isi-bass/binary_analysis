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
 * ????.cpp
 *
 *  Created on: 2012-11-5
 *      Author: ??
 */
int main() {
	int a[5][5], s = 0;//s???????
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> a[i][j];//????
	for (int i = 0; i < 5; i++)//?????
		for (int j = 0; j < 5; j++)//?????
			for (int k = 0; k < 5; k++) {
				if (a[i][j] < a[i][k])
					break;
				if (k == 4)//??????????????
					for (int l = 0; l < 5; l++) {
						if (a[i][j] > a[l][j])
							break;
						if (l == 4) {//?????????????s??
							cout << i + 1 << ' ' << j + 1 << ' ' << a[i][j];
							s++;
						}
					}
			}
	if (s == 0)
		cout << "not found";//???
	return 0;
}
