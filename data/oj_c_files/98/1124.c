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

/*????
 *  Created on: 2012-12-10
 *      Author: ??
 */
int main() {
	int n, sum = 0;//?????????
	cin >> n;//??
	char a[40], *p = a;//??
	cin >> p;//???
	sum = strlen(p);
	cout << p;
	for (int i = 1; i < n; i++) {//?????
		cin >> p;//??
		sum += strlen(p);//??
		if (sum > 79) {//??
			cout << endl << p;
			sum = strlen(p);
		} else {//???
			cout << ' ' << p;
			sum++;
		}
	}
	return 0;
}
