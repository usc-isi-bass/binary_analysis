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
 *  Created on: 2012-12-9
 *  Author: ???
 */
int main() {
	int n, m;
	cin >> n;//?????
	char a[50], *p = a;
	for (int i = 0, num = 0; i < n; i++) {//num??????????????
		cin >> a;//????
		m = strlen(a);//???????
		if (num == 0) {//??????????
			for (int j = 0; j < m; j++) {//???
				cout << *(p + j);
			}
			num += m;//num??m
		} else if (num + m + 1 <= 80) {//???????????80
			cout << ' ';//?????????
			for (int j = 0; j < m; j++) {//????????
				cout << *(p + j);
			}
			num += m + 1;//num=num+m+1
		} else {//??????????80
			cout << endl;//?????
			for (int j = 0; j < m; j++) {//???????
				cout << *(p + j);
			}
			num = m;//num??m
		}
	}
	return 0;
}
